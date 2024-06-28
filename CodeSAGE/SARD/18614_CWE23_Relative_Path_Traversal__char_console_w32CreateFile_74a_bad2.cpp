#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 char VAR5[VAR6] = VAR7;
 VAR4 = VAR5;
 {
 size_t VAR8 = strlen(VAR4);
 if (VAR6-VAR8 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR4+VAR8, (int)(VAR6-VAR8), stdin) != NULL)
 {
 VAR8 = strlen(VAR4);
 if (VAR8 > 0 && VAR4[VAR8-1] == '')
 {
 VAR4[VAR8-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR4[VAR8] = '';
 }
 }
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
