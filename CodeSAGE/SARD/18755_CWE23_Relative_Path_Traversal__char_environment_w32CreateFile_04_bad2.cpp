#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(VAR6)
 {
 {
 size_t VAR7 = strlen(VAR2);
 char * VAR8 = FUN2(VAR9);
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR7, VAR8, VAR4-VAR7-1);
 }
 }
 }
 {
 HANDLE VAR10;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR10 = FUN3(VAR2,
 (VAR11|VAR12),
 0,
 NULL,
 VAR13,
 VAR14,
 NULL);
 if (VAR10 != VAR15)
 {
 FUN4(VAR10);
 }
 }
}
#endif
