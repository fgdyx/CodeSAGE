#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
 int VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
}
void FUN3()
{
 int VAR2;
 VAR2 = 0;
 {
 char VAR5[VAR6] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN4(VAR5);
 }
 else
 {
 FUN5("");
 }
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
