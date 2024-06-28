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
 size_t VAR9,VAR10;
 int *VAR11;
 /* POTENTIAL FLAW: dataBytes may overflow to a small value */
 VAR9 = VAR3 * sizeof(int);
 VAR11 = (int*)new char[VAR9];
 for (VAR10 = 0; VAR10 < (VAR12)VAR3; VAR10++)
 {
 VAR11[VAR10] = 0;
 }
 FUN5(VAR11[0]);
 delete [] VAR11;
 }
}
}
#endif
