#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
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
 FUN3("");
 VAR2[VAR6] = '';
 }
 }
 }
 FUN1(VAR2);
}
#endif
