#ifndef VAR1
void FUN1(size_t VAR2)
{
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4(size_t VAR2)
{
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4) && VAR2 < 100)
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
