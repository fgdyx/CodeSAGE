#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN2(VAR4, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 vsnprintf(VAR3, 100-1, VAR2, VAR4);
 FUN3(VAR4);
 FUN4(VAR3);
 }
}
void FUN5()
{
 int VAR5,VAR6;
 char * VAR2;
 char VAR7[100] = "";
 VAR2 = VAR7;
 for(VAR5 = 0; VAR5 < 1; VAR5++)
 {
 {
 size_t VAR8 = strlen(VAR2);
 if (100-VAR8 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR2+VAR8, (int)(100-VAR8), stdin) != NULL)
 {
 VAR8 = strlen(VAR2);
 if (VAR8 > 0 && VAR2[VAR8-1] == '')
 {
 VAR2[VAR8-1] = '';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR8] = '';
 }
 }
 }
 }
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 FUN1(VAR2, VAR2);
 }
}
#endif
