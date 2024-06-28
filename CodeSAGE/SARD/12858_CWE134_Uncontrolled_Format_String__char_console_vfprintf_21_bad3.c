#ifndef VAR1
static int VAR2 = 0;
static void FUN1(char * VAR3, ...)
{
 if(VAR2)
 {
 {
 va_list VAR4;
 FUN2(VAR4, VAR3);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR5, VAR3, VAR4);
 FUN4(VAR4);
 }
 }
}
void FUN5()
{
 char * VAR3;
 char VAR6[100] = "";
 VAR3 = VAR6;
 {
 size_t VAR7 = strlen(VAR3);
 if (100-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR3+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR3);
 if (VAR7 > 0 && VAR3[VAR7-1] == '')
 {
 VAR3[VAR7-1] = '';
 }
 }
 else
 {
 FUN6("");
 VAR3[VAR7] = '';
 }
 }
 }
 VAR2 = 1;
 FUN1(VAR3, VAR3);
}
#endif
