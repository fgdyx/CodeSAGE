#ifndef VAR1
void FUN1(char * &VAR2)
{
 {
 size_t VAR3 = strlen(VAR2);
 if (100-VAR3 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR3, (int)(100-VAR3), stdin) != NULL)
 {
 VAR3 = strlen(VAR2);
 if (VAR3 > 0 && VAR2[VAR3-1] == '')
 {
 VAR2[VAR3-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR3] = '';
 }
 }
 }
}
#endif
