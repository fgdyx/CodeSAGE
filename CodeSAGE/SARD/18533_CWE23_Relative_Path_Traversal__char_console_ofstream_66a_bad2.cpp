#ifndef VAR1
void FUN1(char * VAR2[]);
void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 char VAR4[VAR5] = VAR6;
 VAR3 = VAR4;
 {
 size_t VAR7 = strlen(VAR3);
 if (VAR5-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR3+VAR7, (int)(VAR5-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR3);
 if (VAR7 > 0 && VAR3[VAR7-1] == '')
 {
 VAR3[VAR7-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR3[VAR7] = '';
 }
 }
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
