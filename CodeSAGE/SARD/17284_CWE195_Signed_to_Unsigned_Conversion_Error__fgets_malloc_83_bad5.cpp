#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define FUN1 (3 * sizeof(VAR3) + 2)
namespace VAR4
{
VAR5::FUN2(int VAR6)
{
 VAR3 = VAR6;
 {
 char VAR7[VAR8] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR3 = FUN3(VAR7);
 }
 else
 {
 FUN4("");
 }
 }
}
VAR5::~FUN2()
{
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR9 = (char *)malloc(VAR3);
 memset(VAR9, '', VAR3-1);
 VAR9[VAR3-1] = '';
 FUN4(VAR9);
 free(VAR9);
 }
}
}
#endif
