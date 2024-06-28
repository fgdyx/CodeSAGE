#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 HANDLE VAR4;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR4 = FUN2(VAR2,
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
void FUN4()
{
 char * VAR2;
 char VAR10[VAR11] = "";
 VAR2 = VAR10;
 {
 size_t VAR12 = strlen(VAR2);
 char * VAR13 = FUN5(VAR14);
 if (VAR13 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR12, VAR13, VAR11-VAR12-1);
 }
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
