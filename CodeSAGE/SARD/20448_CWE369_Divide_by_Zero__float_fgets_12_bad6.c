#ifndef VAR1
void FUN1()
{
 float VAR2;
 VAR2 = 0.0F;
 if(FUN2())
 {
 {
 char VAR3[VAR4];
 /* POTENTIAL FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = (float)FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
 else
 {
 VAR2 = 2.0F;
 }
 if(FUN2())
 {
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR5 = (int)(100.0 / VAR2);
 FUN5(VAR5);
 }
 }
 else
 {
 if(FUN6(VAR2) > 0.000001)
 {
 int VAR5 = (int)(100.0 / VAR2);
 FUN5(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
