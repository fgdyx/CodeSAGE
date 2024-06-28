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
 {
 size_t VAR9;
 int *VAR10;
 /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
 * so that the for loop doing the initialization causes a buffer overflow */
 VAR10 = (int*)malloc(VAR3 * sizeof(int));
 for (VAR9 = 0; VAR9 < (VAR11)VAR3; VAR9++)
 {
 VAR10[VAR9] = 0;
 }
 FUN5(VAR10[0]);
 free(VAR10);
 }
}
}
#endif
