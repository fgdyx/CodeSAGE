#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char VAR5[VAR6] = "";
 VAR4 = VAR5;
 {
 size_t VAR7 = strlen(VAR4);
 if (VAR6-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR4+VAR7, (int)(VAR6-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR4);
 if (VAR7 > 0 && VAR4[VAR7-1] == '')
 {
 VAR4[VAR7-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR4[VAR7] = '';
 }
 }
 }
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 FUN1(VAR3);
}
#endif
