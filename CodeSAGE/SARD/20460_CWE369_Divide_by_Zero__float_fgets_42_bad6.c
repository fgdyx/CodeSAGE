#ifndef VAR1
static float FUN1(float VAR2)
{
 {
 char VAR3[VAR4];
 /* POTENTIAL FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = (float)FUN2(VAR3);
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
 float VAR2;
 VAR2 = 0.0F;
 VAR2 = FUN1(VAR2);
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR5 = (int)(100.0 / VAR2);
 FUN5(VAR5);
 }
}
#endif
