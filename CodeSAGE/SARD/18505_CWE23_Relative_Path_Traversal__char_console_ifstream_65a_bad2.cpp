#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
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
 FUN3("");
 VAR2[VAR8] = '';
 }
 }
 }
 FUN4(VAR2);
}
#endif
