#ifndef VAR1
char * FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 HANDLE VAR5;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR5 = FUN3(VAR2,
 (VAR6|VAR7),
 0,
 NULL,
 VAR8,
 VAR9,
 NULL);
 if (VAR5 != VAR10)
 {
 FUN4(VAR5);
 }
 }
}
#endif
