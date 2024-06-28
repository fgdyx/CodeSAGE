#ifndef VAR1
void FUN1(float &VAR2)
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
}
#endif
