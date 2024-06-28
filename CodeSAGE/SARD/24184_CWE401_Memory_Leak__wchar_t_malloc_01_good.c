#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 ;
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 free(VAR2);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
