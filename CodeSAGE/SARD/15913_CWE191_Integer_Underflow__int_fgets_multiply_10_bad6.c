#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
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
 if(VAR3)
 {
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
 int VAR6 = VAR2 * 2;
 FUN4(VAR6);
 }
 }
}
#endif
