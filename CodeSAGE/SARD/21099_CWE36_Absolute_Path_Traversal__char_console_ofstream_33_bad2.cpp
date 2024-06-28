#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
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
 {
 char * VAR2 = VAR3;
 {
 ofstream VAR7;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
 }
}
#endif
