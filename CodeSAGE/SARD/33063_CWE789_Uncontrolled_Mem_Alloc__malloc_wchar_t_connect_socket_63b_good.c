#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 size_t VAR4 = *VAR3;
 {
 wchar_t * VAR5;
 if (VAR4 > wcslen(VAR6))
 {
 VAR5 = (wchar_t *)malloc(VAR4*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4(VAR2 * VAR3)
{
 size_t VAR4 = *VAR3;
 {
 wchar_t * VAR5;
 if (VAR4 > wcslen(VAR6) && VAR4 < 100)
 {
 VAR5 = (wchar_t *)malloc(VAR4*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
