#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
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
 {
 int VAR5 = VAR2;
 int VAR2 = VAR5;
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR6 = (char)VAR2;
 FUN4(VAR6);
 }
 }
}
#endif
