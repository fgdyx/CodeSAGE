#ifndef VAR1
extern int VAR2;
char * FUN1(char * VAR3)
{
 if(VAR2)
 {
 {
 size_t VAR4 = strlen(VAR3);
 if (VAR5-VAR4 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR3+VAR4, (int)(VAR5-VAR4), stdin) != NULL)
 {
 VAR4 = strlen(VAR3);
 if (VAR4 > 0 && VAR3[VAR4-1] == '')
 {
 VAR3[VAR4-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR3[VAR4] = '';
 }
 }
 }
 }
 return VAR3;
}
#endif
