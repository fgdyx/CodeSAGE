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
 goto VAR5;
VAR5:
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN6(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 goto VAR9;
VAR9:
 FUN1(VAR2, VAR2);
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
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 goto VAR5;
VAR5:
 strcpy(VAR2, "");
 goto VAR9;
VAR9:
 FUN7(VAR2, VAR2);
}
void FUN9()
{
 FUN8();
 FUN5();
}
#endif
