#ifndef VAR1
static int VAR2 = 0;
static void FUN1(char * VAR3, ...)
{
 if(VAR2)
 {
 {
 char VAR4[100] = "";
 va_list VAR5;
 FUN2(VAR5, VAR3);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 vsnprintf(VAR4, 100-1, VAR3, VAR5);
 FUN3(VAR5);
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
 VAR8 * VAR9;
 if (100-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR3+VAR7, (int)(100-VAR7), VAR9) == NULL)
 {
 FUN4("");
 VAR3[VAR7] = '';
 }
 fclose(VAR9);
 }
 }
 }
 VAR2 = 1;
 FUN1(VAR3, VAR3);
}
#endif
