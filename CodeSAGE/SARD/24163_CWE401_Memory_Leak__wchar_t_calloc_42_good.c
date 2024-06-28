#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 return VAR2;
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 ;
}
static wchar_t * FUN5(wchar_t * VAR2)
{
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 return VAR2;
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN5(VAR2);
 free(VAR2);
}
void FUN7()
{
 FUN6();
 FUN4();
}
#endif
