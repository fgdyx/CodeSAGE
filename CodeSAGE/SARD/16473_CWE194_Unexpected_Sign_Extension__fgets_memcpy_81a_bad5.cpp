#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
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
 const VAR5& VAR6 = FUN4();
 VAR6.FUN5(VAR2);
}
#endif
