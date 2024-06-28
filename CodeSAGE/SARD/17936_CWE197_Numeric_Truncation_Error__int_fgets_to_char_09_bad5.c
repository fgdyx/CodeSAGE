#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR6 = (char)VAR2;
 FUN4(VAR6);
 }
}
#endif
