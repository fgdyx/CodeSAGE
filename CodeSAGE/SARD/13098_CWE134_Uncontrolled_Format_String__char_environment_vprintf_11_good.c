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
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(FUN6())
 {
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN7(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 if(FUN8())
 {
 FUN9("");
 }
 else
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN10(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
static void FUN11()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(FUN6())
 {
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN7(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 if(FUN6())
 {
 FUN10(VAR2, VAR2);
 }
}
static void FUN12(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN13()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(FUN8())
 {
 FUN9("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(FUN6())
 {
 FUN12(VAR2, VAR2);
 }
}
static void FUN14(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN15()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(FUN6())
 {
 strcpy(VAR2, "");
 }
 if(FUN6())
 {
 FUN14(VAR2, VAR2);
 }
}
void FUN16()
{
 FUN13();
 FUN15();
 FUN5();
 FUN11();
}
#endif
