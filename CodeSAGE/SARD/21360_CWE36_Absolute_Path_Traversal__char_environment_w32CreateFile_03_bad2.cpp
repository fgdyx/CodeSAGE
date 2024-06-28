#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(5==5)
 {
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR5, VAR6, VAR4-VAR5-1);
 }
 }
 }
 {
 HANDLE VAR8;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR8 = FUN3(VAR2,
 (VAR9|VAR10),
 0,
 NULL,
 VAR11,
 VAR12,
 NULL);
 if (VAR8 != VAR13)
 {
 FUN4(VAR8);
 }
 }
}
#endif
