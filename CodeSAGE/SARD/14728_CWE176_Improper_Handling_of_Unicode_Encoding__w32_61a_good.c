#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 char VAR4[10] = "";
 int VAR5;
 VAR5 = FUN3(VAR6, VAR7, VAR2, -1, VAR4, 0, 0, 0);
 FUN3(VAR6, VAR7, VAR2, -1, VAR4, VAR5 , 0, 0);
 }
}
wchar_t * FUN4(wchar_t * VAR2);
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 VAR2 = FUN4(VAR2);
 {
 char VAR4[10] = "";
 int VAR5;
 VAR5 = FUN3(VAR6, VAR7, VAR2, -1, VAR4, 0, 0, 0);
 if (VAR5 < 10)
 {
 FUN3(VAR6, VAR7, VAR2, -1, VAR4, VAR5 , 0, 0);
 }
 else
 {
 FUN6("");
 }
 }
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
