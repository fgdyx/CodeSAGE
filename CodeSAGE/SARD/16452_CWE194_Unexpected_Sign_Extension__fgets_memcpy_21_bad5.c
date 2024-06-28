#ifndef VAR1
static int VAR2 = 0;
static short FUN1(short VAR3)
{
 if(VAR2)
 {
 {
 char VAR4[VAR5] = "";
 /* FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = (short)FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
 return VAR3;
}
void FUN4()
{
 short VAR3;
 VAR3 = 0;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 char VAR6[100];
 char VAR7[100] = "";
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memcpy(VAR7, VAR6, VAR3);
 VAR7[VAR3] = '';
 }
 FUN3(VAR7);
 }
}
#endif
