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
 while(1)
 {
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN6(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 break;
 }
 while(1)
 {
 FUN1(VAR2, VAR2);
 break;
 }
}
static void FUN7(char * VAR2, ...)
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
static void FUN8()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 while(1)
 {
 strcpy(VAR2, "");
 break;
 }
 while(1)
 {
 FUN7(VAR2, VAR2);
 break;
 }
}
void FUN9()
{
 FUN8();
 FUN5();
}
#endif
