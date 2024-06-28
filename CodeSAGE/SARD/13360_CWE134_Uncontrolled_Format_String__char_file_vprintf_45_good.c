#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 char * VAR2 = VAR4;
 FUN1(VAR2, VAR2);
}
static void FUN6()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 strcpy(VAR2, "");
 VAR4 = VAR2;
 FUN5();
}
static void FUN7(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
static void FUN8()
{
 char * VAR2 = VAR6;
 FUN7(VAR2, VAR2);
}
static void FUN9()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 size_t VAR7 = strlen(VAR2);
 VAR8 * VAR9;
 if (100-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 if (fgets(VAR2+VAR7, (int)(100-VAR7), VAR9) == NULL)
 {
 FUN10("");
 VAR2[VAR7] = '';
 }
 fclose(VAR9);
 }
 }
 }
 VAR6 = VAR2;
 FUN8();
}
void FUN11()
{
 FUN6();
 FUN9();
}
#endif
