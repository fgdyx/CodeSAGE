#ifndef VAR1
void FUN1()
{
 float VAR2;
 float &VAR3 = VAR2;
 VAR2 = 0.0F;
 {
 char VAR4[VAR5];
 /* POTENTIAL FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = (float)FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 {
 float VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR6 = (int)(100.0 / VAR2);
 FUN4(VAR6);
 }
 }
}
#endif
