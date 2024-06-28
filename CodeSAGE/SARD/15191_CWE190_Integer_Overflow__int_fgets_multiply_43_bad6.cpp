#ifndef VAR1
static void FUN1(int &VAR2)
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
void FUN4()
{
 int VAR2;
 VAR2 = 0;
 FUN1(VAR2);
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > INT_MAX, this will overflow */
 int VAR5 = VAR2 * 2;
 FUN5(VAR5);
 }
}
#endif
