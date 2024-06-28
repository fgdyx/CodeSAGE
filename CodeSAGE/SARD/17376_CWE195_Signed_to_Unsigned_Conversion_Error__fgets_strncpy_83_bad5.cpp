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
 char VAR9[100];
 char VAR10[100] = "";
 memset(VAR9, '', 100-1);
 VAR9[100-1] = '';
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign conversion could result in a very large number */
 strncpy(VAR10, VAR9, VAR3);
 VAR10[VAR3] = '';
 }
 FUN4(VAR10);
 }
}
}
#endif
