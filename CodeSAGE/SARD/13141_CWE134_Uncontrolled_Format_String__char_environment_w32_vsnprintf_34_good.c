#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN2(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, VAR2, VAR4);
 FUN3(VAR4);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 char * VAR2;
 CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_34_unionType VAR5;
 char VAR6[100] = "";
 VAR2 = VAR6;
 strcpy(VAR2, "");
 VAR5.VAR7 = VAR2;
 {
 char * VAR2 = VAR5.VAR8;
 FUN1(VAR2, VAR2);
 }
}
static void FUN6(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN2(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, "", VAR4);
 FUN3(VAR4);
 FUN4(VAR3);
 }
}
static void FUN7()
{
 char * VAR2;
 CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_34_unionType VAR5;
 char VAR6[100] = "";
 VAR2 = VAR6;
 {
 size_t VAR9 = strlen(VAR2);
 char * VAR10 = FUN8(VAR11);
 if (VAR10 != NULL)
 {
 strncat(VAR2+VAR9, VAR10, 100-VAR9-1);
 }
 }
 VAR5.VAR7 = VAR2;
 {
 char * VAR2 = VAR5.VAR8;
 FUN6(VAR2, VAR2);
 }
}
void FUN9()
{
 FUN5();
 FUN7();
}
#endif
