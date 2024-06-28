#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 float VAR3;
 VAR3 = 0.0F;
 {
 char VAR4[VAR5];
 /* POTENTIAL FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = (float)FUN3(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
 FUN1(&VAR3);
}
#endif
