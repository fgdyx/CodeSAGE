#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 {
 size_t VAR8 = strlen(VAR2);
 if (VAR6-VAR8 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR8, (int)(VAR6-VAR8), stdin) != NULL)
 {
 VAR8 = strlen(VAR2);
 if (VAR8 > 0 && VAR2[VAR8-1] == '')
 {
 VAR2[VAR8-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR8] = '';
 }
 }
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 VAR9 *VAR10 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR10 = FUN3(VAR2, "");
 if (VAR10 != NULL)
 {
 fclose(VAR10);
 }
 }
 }
}
#endif
