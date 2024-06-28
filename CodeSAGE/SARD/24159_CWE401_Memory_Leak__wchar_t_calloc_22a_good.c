#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(wchar_t * VAR5);
static void FUN2()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR5, VAR6"");
 FUN3(VAR5);
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN4(wchar_t * VAR5);
static void FUN5()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR5, VAR6"");
 FUN3(VAR5);
 VAR3 = 1;
 FUN4(VAR5);
}
void FUN6(wchar_t * VAR5);
static void FUN7()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = (wchar_t *)FUN8(100*sizeof(wchar_t));
 wcscpy(VAR5, VAR6"");
 FUN3(VAR5);
 VAR4 = 1;
 FUN6(VAR5);
}
void FUN9()
{
 FUN2();
 FUN5();
 FUN7();
}
#endif
