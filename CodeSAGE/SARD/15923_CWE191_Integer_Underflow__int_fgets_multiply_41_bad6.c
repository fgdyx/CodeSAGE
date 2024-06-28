#ifndef VAR1
static void FUN1(int VAR2)
{
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
 int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
void FUN3()
{
 int VAR2;
 VAR2 = 0;
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN4(VAR4);
 }
 else
 {
 FUN5("");
 }
 }
 FUN1(VAR2);
}
#endif
