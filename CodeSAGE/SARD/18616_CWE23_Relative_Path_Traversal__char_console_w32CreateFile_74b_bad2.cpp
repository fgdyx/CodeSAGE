#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 HANDLE VAR5;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR5 = FUN2(VAR4,
 (VAR6|VAR7),
 0,
 NULL,
 VAR8,
 VAR9,
 NULL);
 if (VAR5 != VAR10)
 {
 FUN3(VAR5);
 }
 }
}
#endif
