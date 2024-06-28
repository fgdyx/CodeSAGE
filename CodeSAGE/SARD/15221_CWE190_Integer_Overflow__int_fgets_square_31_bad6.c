#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 {
 int VAR5 = VAR2;
 int VAR2 = VAR5;
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR6 = VAR2 * VAR2;
 FUN4(VAR6);
 }
 }
}
#endif
