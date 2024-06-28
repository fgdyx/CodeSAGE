#ifndef VAR1
void FUN1()
{
 char * VAR2;
 unionType VAR3;
 char VAR4[VAR5] = "";
 VAR2 = VAR4;
 {
 size_t VAR6 = strlen(VAR2);
 if (VAR5-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR6, (int)(VAR5-VAR6), stdin) != NULL)
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
 VAR3.VAR7 = VAR2;
 {
 char * VAR2 = VAR3.VAR8;
 {
 int VAR9;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR9 = FUN3(VAR2, VAR10|VAR11, VAR12|VAR13);
 if (VAR9 != -1)
 {
 FUN4(VAR9);
 }
 }
 }
}
#endif
