#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
wchar_t * FUN1(wchar_t * VAR4);
static void FUN2()
{
 wchar_t * VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 FUN3(VAR7, VAR7, VAR8, VAR9, VAR10, NULL);
}
wchar_t * FUN4(wchar_t * VAR4);
static void FUN5()
{
 wchar_t * VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 FUN3(VAR7, VAR7, VAR8, VAR9, VAR10, NULL);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
