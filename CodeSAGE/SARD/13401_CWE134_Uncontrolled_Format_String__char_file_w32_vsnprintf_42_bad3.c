#ifndef VAR1
static char * FUN1(char * VAR2)
{
 {
 size_t VAR3 = strlen(VAR2);
 VAR4 * VAR5;
 if (100-VAR3 > 1)
 {
 VAR5 = fopen(VAR6, "");
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR2+VAR3, (int)(100-VAR3), VAR5) == NULL)
 {
 FUN2("");
 VAR2[VAR3] = '';
 }
 fclose(VAR5);
 }
 }
 }
 return VAR2;
}
static void FUN3(char * VAR2, ...)
{
 {
 char VAR7[100] = "";
 va_list VAR8;
 FUN4(VAR8, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 vsnprintf(VAR7, 100-1, VAR2, VAR8);
 FUN5(VAR8);
 FUN2(VAR7);
 }
}
void FUN6()
{
 char * VAR2;
 char VAR9[100] = "";
 VAR2 = VAR9;
 VAR2 = FUN1(VAR2);
 FUN3(VAR2, VAR2);
}
#endif
