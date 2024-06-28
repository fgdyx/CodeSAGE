#ifndef VAR1
static void FUN1(char * VAR2, ...)
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
static void FUN5()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR6==5)
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
 if(VAR6!=5)
 {
 FUN4("");
 }
 else
 {
 FUN1(VAR2, VAR2);
 }
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
static void FUN8()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR6==5)
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
 if(VAR6==5)
 {
 FUN7(VAR2, VAR2);
 }
}
static void FUN9(char * VAR2, ...)
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
static void FUN10()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR6!=5)
 {
 FUN4("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(VAR6==5)
 {
 FUN9(VAR2, VAR2);
 }
}
static void FUN11(char * VAR2, ...)
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
static void FUN12()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR6==5)
 {
 strcpy(VAR2, "");
 }
 if(VAR6==5)
 {
 FUN11(VAR2, VAR2);
 }
}
void FUN13()
{
 FUN10();
 FUN12();
 FUN5();
 FUN8();
}
#endif
