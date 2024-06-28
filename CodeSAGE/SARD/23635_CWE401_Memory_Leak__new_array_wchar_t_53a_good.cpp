#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 FUN3(VAR2);
 FUN1(VAR2);
}
void FUN4(wchar_t * VAR2);
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR4"");
 FUN3(VAR2);
 FUN4(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
