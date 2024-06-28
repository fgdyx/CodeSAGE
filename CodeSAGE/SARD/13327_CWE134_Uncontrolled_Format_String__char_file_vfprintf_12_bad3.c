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
static void FUN5(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, "", VAR3);
 FUN4(VAR3);
 }
}
void FUN6()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(FUN7())
 {
 {
 size_t VAR6 = strlen(VAR2);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR2+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN8("");
 VAR2[VAR6] = '';
 }
 fclose(VAR8);
 }
 }
 }
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(FUN7())
 {
 FUN1(VAR2, VAR2);
 }
 else
 {
 FUN5(VAR2, VAR2);
 }
}
#endif
