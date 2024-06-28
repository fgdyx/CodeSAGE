#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN3(VAR8);
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR6, VAR7, VAR4-VAR6-1);
 }
 }
 }
 {
 HANDLE VAR9;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR9 = FUN4(VAR2,
 (VAR10|VAR11),
 0,
 NULL,
 VAR12,
 VAR13,
 NULL);
 if (VAR9 != VAR14)
 {
 FUN5(VAR9);
 }
 }
}
#endif
