#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN3(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, VAR2, VAR4);
 FUN4(VAR4);
 FUN5(VAR3);
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 FUN1(VAR2);
 FUN2(VAR2, VAR2);
}
void FUN7(char * &VAR2);
static void FUN8(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN3(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, "", VAR4);
 FUN4(VAR4);
 FUN5(VAR3);
 }
}
static void FUN9()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 FUN7(VAR2);
 FUN8(VAR2, VAR2);
}
void FUN10()
{
 FUN6();
 FUN9();
}
#endif
