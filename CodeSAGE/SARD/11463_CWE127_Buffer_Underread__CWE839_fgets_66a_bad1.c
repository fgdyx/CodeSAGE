#ifndef VAR1
void FUN1(int VAR2[]);
void FUN2()
{
 int VAR3;
 int VAR2[5];
 VAR3 = -1;
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = FUN3(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
