#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 while(1)
 {
 {
 size_t VAR5 = strlen(VAR2);
 if (VAR4-VAR5 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR5, (int)(VAR4-VAR5), stdin) != NULL)
 {
 VAR5 = strlen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == '')
 {
 VAR2[VAR5-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR5] = '';
 }
 }
 }
 break;
 }
 {
 ofstream VAR6;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
#endif
