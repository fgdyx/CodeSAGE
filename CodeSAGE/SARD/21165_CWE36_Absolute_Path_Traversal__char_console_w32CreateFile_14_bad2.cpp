#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(VAR5==5)
 {
 {
 size_t VAR6 = strlen(VAR2);
 if (VAR4-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR6, (int)(VAR4-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == '')
 {
 VAR2[VAR6-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR6] = '';
 }
 }
 }
 }
 {
 HANDLE VAR7;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR7 = FUN3(VAR2,
 (VAR8|VAR9),
 0,
 NULL,
 VAR10,
 VAR11,
 NULL);
 if (VAR7 != VAR12)
 {
 FUN4(VAR7);
 }
 }
}
#endif
