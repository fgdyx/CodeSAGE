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
 if(VAR5==5)
 {
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN6(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 }
 if(VAR5!=5)
 {
 FUN7("");
 }
 else
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN8(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
static void FUN9()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 if(VAR5==5)
 {
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN6(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 }
 if(VAR5==5)
 {
 FUN8(VAR2, VAR2);
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
 if(VAR5!=5)
 {
 FUN7("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(VAR5==5)
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
 if(VAR5==5)
 {
 strcpy(VAR2, "");
 }
 if(VAR5==5)
 {
 FUN12(VAR2, VAR2);
 }
}
void FUN14()
{
 FUN11();
 FUN13();
 FUN5();
 FUN9();
}
#endif
