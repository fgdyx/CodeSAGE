#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define CHAR_ARRAY_SIZE 8
namespace VAR3
{
VAR4::FUN1(short VAR5)
{
 VAR6 = VAR5;
 {
 char VAR7[VAR8] = "";
 /* FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR6 = (short)FUN2(VAR7);
 }
 else
 {
 FUN3("");
 }
 }
}
VAR4::~FUN1()
{
 {
 char VAR9[100];
 char VAR10[100] = "";
 memset(VAR9, '', 100-1);
 VAR9[100-1] = '';
 if (VAR6 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memcpy(VAR10, VAR9, VAR6);
 VAR10[VAR6] = '';
 }
 FUN3(VAR10);
 }
}
}
#endif
