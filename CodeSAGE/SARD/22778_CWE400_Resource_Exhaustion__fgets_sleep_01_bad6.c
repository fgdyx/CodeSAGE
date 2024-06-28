#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read count from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
 FUN4(VAR2);
 FUN3("");
}
#endif
