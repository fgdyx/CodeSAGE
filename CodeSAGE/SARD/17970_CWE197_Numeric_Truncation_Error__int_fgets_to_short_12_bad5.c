#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
 else
 {
 VAR2 = VAR5-5;
 }
 {
 /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
 short VAR6 = (short)VAR2;
 FUN5(VAR6);
 }
}
#endif
