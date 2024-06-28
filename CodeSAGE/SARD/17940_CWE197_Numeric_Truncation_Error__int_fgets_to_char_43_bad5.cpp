#ifndef VAR1
static void FUN1(int &VAR2)
{
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR5 = (char)VAR2;
 FUN5(VAR5);
 }
}
#endif
