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
static void FUN5(char * &VAR2)
{
 strcpy(VAR2, "");
}
static void FUN6()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 FUN5(VAR2);
 FUN1(VAR2, VAR2);
}
static void FUN7(char * VAR2, ...)
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
static void FUN8(char * &VAR2)
{
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN9(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
}
static void FUN10()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 FUN8(VAR2);
 FUN7(VAR2, VAR2);
}
void FUN11()
{
 FUN6();
 FUN10();
}
#endif
