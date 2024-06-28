#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 char VAR3[10] = "";
 int VAR4;
 VAR4 = FUN2(VAR5, VAR6, VAR2, -1, VAR3, 0, 0, 0);
 FUN2(VAR5, VAR6, VAR2, -1, VAR3, VAR4 , 0, 0);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR7[100];
 VAR2 = VAR7;
 wcscpy(VAR2, VAR8"");
 FUN1(VAR2);
}
static void FUN4(wchar_t * VAR2)
{
 {
 char VAR3[10] = "";
 int VAR4;
 VAR4 = FUN2(VAR5, VAR6, VAR2, -1, VAR3, 0, 0, 0);
 if (VAR4 < 10)
 {
 FUN2(VAR5, VAR6, VAR2, -1, VAR3, VAR4 , 0, 0);
 }
 else
 {
 FUN5("");
 }
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR7[100];
 VAR2 = VAR7;
 wcscpy(VAR2, VAR8"");
 FUN4(VAR2);
}
void FUN7()
{
 FUN6();
 FUN3();
}
#endif
