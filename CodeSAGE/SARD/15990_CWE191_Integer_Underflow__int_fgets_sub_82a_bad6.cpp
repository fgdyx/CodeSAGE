#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
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
 VAR5* VAR6 = new VAR7;
 VAR6->FUN4(VAR2);
 delete VAR6;
}
#endif
