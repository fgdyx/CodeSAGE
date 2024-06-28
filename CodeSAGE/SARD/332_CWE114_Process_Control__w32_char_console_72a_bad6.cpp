#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char VAR5[100] = "";
 VAR4 = VAR5;
 {
 size_t VAR6 = strlen(VAR4);
 if (100-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR4+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR4);
 if (VAR6 > 0 && VAR4[VAR6-1] == '')
 {
 VAR4[VAR6-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR4[VAR6] = '';
 }
 }
 }
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 FUN1(VAR3);
}
#endif
