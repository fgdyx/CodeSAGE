#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN5(VAR2);
 VAR4 = VAR2;
 FUN1();
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN5(VAR2);
 VAR5 = VAR2;
 FUN2();
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
