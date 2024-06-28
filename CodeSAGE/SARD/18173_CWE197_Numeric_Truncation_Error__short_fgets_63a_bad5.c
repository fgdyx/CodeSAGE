#ifndef VAR1
void FUN1(short * VAR2);
void FUN2()
{
 short VAR3;
 VAR3 = -1;
 {
 char VAR4[VAR5] = "";
 /* FLAW: Use a number input from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = (short)FUN3(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
 FUN1(&VAR3);
}
#endif
