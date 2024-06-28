#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
void FUN5()
{
 char * VAR2;
 void (*VAR4) (char *, ...) = VAR5;
 char VAR6[100] = "";
 VAR2 = VAR6;
 {
 size_t VAR7 = strlen(VAR2);
 VAR8 * VAR9;
 if (100-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR2+VAR7, (int)(100-VAR7), VAR9) == NULL)
 {
 FUN6("");
 VAR2[VAR7] = '';
 }
 fclose(VAR9);
 }
 }
 }
 FUN7(VAR2, VAR2);
}
#endif
