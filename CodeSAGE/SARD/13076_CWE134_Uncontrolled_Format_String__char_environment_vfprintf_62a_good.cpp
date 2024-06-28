#ifndef VAR1
void FUN1(char * &VAR2);
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
 FUN1(VAR2);
 FUN2(VAR2, VAR2);
}
void FUN7(char * &VAR2);
static void FUN8(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN3(VAR3, VAR2);
 FUN4(VAR4, "", VAR3);
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
