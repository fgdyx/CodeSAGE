#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR6);
}
VAR4::~FUN1()
{
 if (VAR6 < 100)
 {
 /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
 * the conversion will cause malloc() to allocate a very large amount of data or fail */
 char * VAR7 = (char *)malloc(VAR6);
 memset(VAR7, '', VAR6-1);
 VAR7[VAR6-1] = '';
 FUN2(VAR7);
 free(VAR7);
 }
}
}
#endif
