#ifndef VAR1
static int FUN1(int VAR2)
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
 return VAR2;
}
void FUN4()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN5(100 % VAR2);
}
#endif
