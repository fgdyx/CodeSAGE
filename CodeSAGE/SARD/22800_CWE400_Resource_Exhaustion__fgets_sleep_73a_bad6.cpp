#ifndef VAR1
void FUN1(VAR2<int> VAR3);
void FUN2()
{
 int VAR4;
 VAR2<int> VAR3;
 VAR4 = -1;
 {
 char VAR5[VAR6] = "";
 /* POTENTIAL FLAW: Read count from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = FUN3(VAR5);
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
