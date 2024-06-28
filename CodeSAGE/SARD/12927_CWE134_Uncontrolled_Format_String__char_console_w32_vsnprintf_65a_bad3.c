#ifndef VAR1
void FUN1(char * VAR2, ...);
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *, ...) = VAR4;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 size_t VAR6 = strlen(VAR2);
 if (100-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
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
 FUN4(VAR2, VAR2);
}
#endif
