#ifndef VAR1
static void FUN1(float VAR2)
{
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR3 = (int)(100.0 / VAR2);
 FUN2(VAR3);
 }
}
void FUN3()
{
 float VAR2;
 VAR2 = 0.0F;
 {
 char VAR4[VAR5];
 /* POTENTIAL FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = (float)FUN4(VAR4);
 }
 else
 {
 FUN5("");
 }
 }
 FUN1(VAR2);
}
#endif
