#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(wchar_t * VAR5);
static void FUN2()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 {
 wchar_t VAR6[] = VAR7"";
 VAR5 = FUN3(VAR6);
 FUN4(VAR5);
 }
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN5(wchar_t * VAR5);
static void FUN6()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 {
 wchar_t VAR6[] = VAR7"";
 VAR5 = FUN3(VAR6);
 FUN4(VAR5);
 }
 VAR3 = 1;
 FUN5(VAR5);
}
void FUN7(wchar_t * VAR5);
static void FUN8()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = (wchar_t *)FUN9(100*sizeof(wchar_t));
 wcscpy(VAR5, VAR7"");
 FUN4(VAR5);
 VAR4 = 1;
 FUN7(VAR5);
}
void FUN10()
{
 FUN2();
 FUN6();
 FUN8();
}
#endif
