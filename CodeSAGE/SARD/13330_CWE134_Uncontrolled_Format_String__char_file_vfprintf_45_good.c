#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 char * VAR2 = VAR5;
 FUN1(VAR2, VAR2);
}
static void FUN6()
{
 char * VAR2;
 char VAR6[100] = "";
 VAR2 = VAR6;
 strcpy(VAR2, "");
 VAR5 = VAR2;
 FUN5();
}
static void FUN7(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, "", VAR3);
 FUN4(VAR3);
 }
}
static void FUN8()
{
 char * VAR2 = VAR7;
 FUN7(VAR2, VAR2);
}
static void FUN9()
{
 char * VAR2;
 char VAR6[100] = "";
 VAR2 = VAR6;
 {
 size_t VAR8 = strlen(VAR2);
 VAR9 * VAR10;
 if (100-VAR8 > 1)
 {
 VAR10 = fopen(VAR11, "");
 if (VAR10 != NULL)
 {
 if (fgets(VAR2+VAR8, (int)(100-VAR8), VAR10) == NULL)
 {
 FUN10("");
 VAR2[VAR8] = '';
 }
 fclose(VAR10);
 }
 }
 }
 VAR7 = VAR2;
 FUN8();
}
void FUN11()
{
 FUN6();
 FUN9();
}
#endif
