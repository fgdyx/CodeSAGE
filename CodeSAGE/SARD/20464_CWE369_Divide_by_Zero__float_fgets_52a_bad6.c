#ifndef VAR1
void FUN1(float VAR2);
void FUN2()
{
 float VAR2;
 VAR2 = 0.0F;
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
 FUN1(VAR2);
}
#endif
