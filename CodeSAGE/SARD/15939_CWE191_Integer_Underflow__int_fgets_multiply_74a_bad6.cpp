#ifndef VAR1
void FUN1(VAR2<int, int> VAR3);
void FUN2()
{
 int VAR4;
 VAR2<int, int> VAR3;
 VAR4 = 0;
 {
 char VAR5[VAR6] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = FUN3(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
