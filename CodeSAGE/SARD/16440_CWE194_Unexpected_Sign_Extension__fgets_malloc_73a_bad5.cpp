#ifndef VAR1
void FUN1(VAR2<short> VAR3);
void FUN2()
{
 short VAR4;
 VAR2<short> VAR3;
 VAR4 = 0;
 {
 char VAR5[VAR6] = "";
 /* FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = (short)FUN3(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
 VAR3.FUN5(VAR4);
 VAR3.FUN5(VAR4);
 VAR3.FUN5(VAR4);
 FUN1(VAR3);
}
#endif
