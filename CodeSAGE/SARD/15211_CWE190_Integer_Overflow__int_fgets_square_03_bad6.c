#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(5==5)
 {
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
 }
 if(5==5)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR5 = VAR2 * VAR2;
 FUN4(VAR5);
 }
 }
}
#endif
