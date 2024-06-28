#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 float VAR4;
 VAR4 = 0.0F;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 char VAR5[VAR6];
 /* POTENTIAL FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = (float)FUN2(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 /* POTENTIAL FLAW: Possibly divide by zero */
 int VAR7 = (int)(100.0 / VAR4);
 FUN4(VAR7);
 }
 }
}
#endif
