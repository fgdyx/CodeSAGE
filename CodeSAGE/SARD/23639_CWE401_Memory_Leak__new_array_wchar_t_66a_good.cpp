#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
static void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 wchar_t VAR4[100];
 VAR3 = VAR4;
 wcscpy(VAR3, VAR5"");
 FUN3(VAR3);
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN4(wchar_t * VAR2[]);
static void FUN5()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 VAR3 = NULL;
 VAR3 = new wchar_t[100];
 wcscpy(VAR3, VAR5"");
 FUN3(VAR3);
 VAR2[2] = VAR3;
 FUN4(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
