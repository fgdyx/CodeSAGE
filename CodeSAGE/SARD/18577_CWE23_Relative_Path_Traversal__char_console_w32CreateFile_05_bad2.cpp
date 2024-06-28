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
 if (VAR4-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR7, (int)(VAR4-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == '')
 {
 VAR2[VAR7-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR7] = '';
 }
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
