#ifndef VAR1
void FUN1(int VAR2);
void FUN2()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 {
 char VAR5[VAR6] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN3(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
 FUN5(VAR2);
}
#endif
