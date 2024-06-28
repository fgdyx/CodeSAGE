#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 int VAR4,VAR5;
 char * VAR2;
 char VAR6[100] = "";
 VAR2 = VAR6;
 for(VAR4 = 0; VAR4 < 1; VAR4++)
 {
 {
 size_t VAR7 = strlen(VAR2);
 char * VAR8 = FUN6(VAR9);
 if (VAR8 != NULL)
 {
 strncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 }
 for(VAR5 = 0; VAR5 < 1; VAR5++)
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN7(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN8()
{
 int VAR10,VAR11;
 char * VAR2;
 char VAR6[100] = "";
 VAR2 = VAR6;
 for(VAR10 = 0; VAR10 < 1; VAR10++)
 {
 strcpy(VAR2, "");
 }
 for(VAR11 = 0; VAR11 < 1; VAR11++)
 {
 FUN7(VAR2, VAR2);
 }
}
void FUN9()
{
 FUN8();
 FUN5();
}
#endif
