#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
}
void FUN4(wchar_t * &VAR2)
{
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
}
#endif
