#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 {
 char VAR4[100];
 char VAR5[100] = "";
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign conversion could result in a very large number */
 memcpy(VAR5, VAR4, VAR2);
 VAR5[VAR2] = '';
 }
 FUN2(VAR5);
 }
}
void FUN3()
{
 int VAR2;
 VAR2 = -1;
 {
 char VAR6[VAR7] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR2 = FUN4(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
