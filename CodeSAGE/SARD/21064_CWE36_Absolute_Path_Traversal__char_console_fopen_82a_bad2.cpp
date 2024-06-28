#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
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
 VAR6* VAR7 = new VAR8;
 VAR7->FUN3(VAR2);
 delete VAR7;
}
#endif
