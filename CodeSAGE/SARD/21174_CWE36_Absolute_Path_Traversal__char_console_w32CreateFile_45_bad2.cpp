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
 if (VAR11-VAR12 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR12, (int)(VAR11-VAR12), stdin) != NULL)
 {
 VAR12 = strlen(VAR2);
 if (VAR12 > 0 && VAR2[VAR12-1] == '')
 {
 VAR2[VAR12-1] = '';
 }
 }
 else
 {
 FUN5("");
 VAR2[VAR12] = '';
 }
 }
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
