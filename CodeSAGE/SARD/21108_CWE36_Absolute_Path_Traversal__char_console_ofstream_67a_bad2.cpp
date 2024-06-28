#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 char * VAR3;
 structType VAR2;
 char VAR4[VAR5] = "";
 VAR3 = VAR4;
 {
 size_t VAR6 = strlen(VAR3);
 if (VAR5-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR3+VAR6, (int)(VAR5-VAR6), stdin) != NULL)
 {
 VAR6 = strlen(VAR3);
 if (VAR6 > 0 && VAR3[VAR6-1] == '')
 {
 VAR3[VAR6-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR3[VAR6] = '';
 }
 }
 }
 VAR2.VAR7 = VAR3;
 FUN1(VAR2);
}
#endif
