#ifndef VAR1
void FUN1(VAR2 &VAR3)
{
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = FUN2(VAR4, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
