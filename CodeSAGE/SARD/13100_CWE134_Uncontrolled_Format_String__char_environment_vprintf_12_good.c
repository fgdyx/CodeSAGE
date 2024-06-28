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
static void FUN5(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(FUN7())
 {
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN8(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 else
 {
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN8(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 if(FUN7())
 {
 FUN5(VAR2, VAR2);
 }
 else
 {
 FUN5(VAR2, VAR2);
 }
}
static void FUN9(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
static void FUN10(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN11()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(FUN7())
 {
 strcpy(VAR2, "");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(FUN7())
 {
 FUN10(VAR2, VAR2);
 }
 else
 {
 FUN10(VAR2, VAR2);
 }
}
void FUN12()
{
 FUN11();
 FUN6();
}
#endif
