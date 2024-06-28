#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
void FUN5()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(FUN6())
 {
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
 FUN7("");
 VAR2[VAR6] = '';
 }
 }
 }
 }
 if(FUN6())
 {
 FUN1(VAR2, VAR2);
 }
}
#endif
