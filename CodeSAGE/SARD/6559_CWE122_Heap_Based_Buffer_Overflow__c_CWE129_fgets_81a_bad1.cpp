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
 const VAR5& VAR6 = FUN4();
 VAR6.FUN5(VAR2);
}
#endif
