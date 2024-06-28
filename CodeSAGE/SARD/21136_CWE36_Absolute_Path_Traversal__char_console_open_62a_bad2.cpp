#ifndef VAR1
void FUN1(char * &VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 int VAR5;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR5 = FUN3(VAR2, VAR6|VAR7, VAR8|VAR9);
 if (VAR5 != -1)
 {
 FUN4(VAR5);
 }
 }
}
#endif
