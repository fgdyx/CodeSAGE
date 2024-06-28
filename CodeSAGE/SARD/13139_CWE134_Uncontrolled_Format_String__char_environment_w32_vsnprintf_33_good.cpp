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
 char * &VAR5 = VAR2;
 char VAR6[100] = "";
 VAR2 = VAR6;
 strcpy(VAR2, "");
 {
 char * VAR2 = VAR5;
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
 char * &VAR5 = VAR2;
 char VAR6[100] = "";
 VAR2 = VAR6;
 {
 size_t VAR7 = strlen(VAR2);
 char * VAR8 = FUN8(VAR9);
 if (VAR8 != NULL)
 {
 strncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 {
 char * VAR2 = VAR5;
 FUN6(VAR2, VAR2);
 }
}
void FUN9()
{
 FUN5();
 FUN7();
}
#endif
