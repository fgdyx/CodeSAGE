#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 return VAR2;
}
wchar_t * FUN4(wchar_t * VAR2)
{
 VAR2 = (wchar_t *)realloc(VAR2, 100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 return VAR2;
}
#endif
