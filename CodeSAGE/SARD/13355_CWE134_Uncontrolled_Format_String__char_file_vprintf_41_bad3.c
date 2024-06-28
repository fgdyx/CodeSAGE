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
static void FUN5(char * VAR2)
{
 FUN1(VAR2, VAR2);
}
void FUN6()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 {
 size_t VAR5 = strlen(VAR2);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN7("");
 VAR2[VAR5] = '';
 }
 fclose(VAR7);
 }
 }
 }
 FUN5(VAR2);
}
#endif
