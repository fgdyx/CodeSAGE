#ifndef VAR1
static void FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Possibly divide by zero */
 FUN2(100 % VAR2);
}
void FUN3()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 {
 char VAR5[VAR6] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN4(VAR5);
 }
 else
 {
 FUN5("");
 }
 }
 FUN6(VAR2);
}
#endif
