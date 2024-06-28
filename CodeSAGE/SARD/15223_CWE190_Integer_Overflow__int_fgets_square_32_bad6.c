#ifndef VAR1
void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = 0;
 {
 int VAR2 = *VAR3;
 {
 char VAR5[VAR6] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN2(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR7 = VAR2 * VAR2;
 FUN4(VAR7);
 }
 }
}
#endif
