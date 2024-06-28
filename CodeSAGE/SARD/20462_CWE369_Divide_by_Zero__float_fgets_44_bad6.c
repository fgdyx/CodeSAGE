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
 void (*VAR4) (float) = VAR5;
 VAR2 = 0.0F;
 {
 char VAR6[VAR7];
 /* POTENTIAL FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR2 = (float)FUN4(VAR6);
 }
 else
 {
 FUN5("");
 }
 }
 FUN6(VAR2);
}
#endif
