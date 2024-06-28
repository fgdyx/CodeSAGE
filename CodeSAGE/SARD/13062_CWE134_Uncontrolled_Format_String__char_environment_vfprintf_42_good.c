#ifndef VAR1
static char * FUN1(char * VAR2)
{
 strcpy(VAR2, "");
 return VAR2;
}
static void FUN2(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN3(VAR3, VAR2);
 FUN4(VAR4, VAR2, VAR3);
 FUN5(VAR3);
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 VAR2 = FUN1(VAR2);
 FUN2(VAR2, VAR2);
}
static char * FUN7(char * VAR2)
{
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN8(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 return VAR2;
}
static void FUN9(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN3(VAR3, VAR2);
 FUN4(VAR4, "", VAR3);
 FUN5(VAR3);
 }
}
static void FUN10()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 VAR2 = FUN7(VAR2);
 FUN9(VAR2, VAR2);
}
void FUN11()
{
 FUN6();
 FUN10();
}
#endif
