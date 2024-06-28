#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
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
 VAR2 = -2;
 }
 if(FUN2())
 {
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
 int VAR5 = VAR2 * 2;
 FUN5(VAR5);
 }
 }
 else
 {
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR6/2))
 {
 int VAR5 = VAR2 * 2;
 FUN5(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
#endif
