#ifndef VAR1
void FUN1(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 {
 HANDLE VAR4;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR4 = FUN2(VAR3,
 (VAR5|VAR6),
 0,
 NULL,
 VAR7,
 VAR8,
 NULL);
 if (VAR4 != VAR9)
 {
 FUN3(VAR4);
 }
 }
}
#endif
