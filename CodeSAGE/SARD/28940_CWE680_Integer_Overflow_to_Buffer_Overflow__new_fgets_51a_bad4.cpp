#ifndef VAR1
void FUN1(int VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 FUN1(VAR2);
}
#endif
