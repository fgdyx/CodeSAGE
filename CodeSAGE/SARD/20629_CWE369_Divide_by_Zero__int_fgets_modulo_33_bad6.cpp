#ifndef VAR1
void FUN1()
{
 int VAR2;
 int &VAR3 = VAR2;
 VAR2 = -1;
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 {
 int VAR2 = VAR3;
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN4(100 % VAR2);
 }
}
#endif
