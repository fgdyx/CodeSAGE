#ifndef VAR1
char * FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 HANDLE VAR6;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR6 = FUN3(VAR2,
 (VAR7|VAR8),
 0,
 NULL,
 VAR9,
 VAR10,
 NULL);
 if (VAR6 != VAR11)
 {
 FUN4(VAR6);
 }
 }
}
#endif
