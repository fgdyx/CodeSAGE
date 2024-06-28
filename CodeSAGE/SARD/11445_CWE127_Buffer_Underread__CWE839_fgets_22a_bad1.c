#ifndef VAR1
int VAR2 = 0;
void FUN1(int VAR3);
void FUN2()
{
 int VAR3;
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
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
