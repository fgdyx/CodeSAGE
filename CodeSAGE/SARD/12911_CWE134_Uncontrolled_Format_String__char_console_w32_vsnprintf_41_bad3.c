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
static void FUN5(char * VAR2)
{
 FUN1(VAR2, VAR2);
}
void FUN6()
{
 char * VAR2;
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
 FUN4("");
 VAR2[VAR6] = '';
 }
 }
 }
 FUN5(VAR2);
}
#endif
