#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN2(100 % VAR2);
}
void FUN3()
{
 int VAR2;
 VAR2 = -1;
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN4(VAR4);
 }
 else
 {
 FUN5("");
 }
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
