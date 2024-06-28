#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 ;
}
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 VAR2 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR5"");
 FUN4(VAR2);
 FUN5(VAR2);
}
static void FUN6(wchar_t * VAR2)
{
 free(VAR2);
}
static void FUN7()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR6;
 VAR2 = NULL;
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR5"");
 FUN4(VAR2);
 FUN5(VAR2);
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
