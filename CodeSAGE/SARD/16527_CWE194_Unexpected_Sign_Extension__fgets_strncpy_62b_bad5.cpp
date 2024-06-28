#ifndef VAR1
void FUN1(short &VAR2)
{
 {
 char VAR3[VAR4] = "";
 /* FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = (short)FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
