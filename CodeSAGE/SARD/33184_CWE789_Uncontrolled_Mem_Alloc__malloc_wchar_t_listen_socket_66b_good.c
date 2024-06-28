#ifndef VAR1
void FUN1(size_t VAR2[])
{
 size_t VAR3 = VAR2[2];
 {
 wchar_t * VAR4;
 if (VAR3 > wcslen(VAR5))
 {
 VAR4 = (wchar_t *)malloc(VAR3*sizeof(wchar_t));
 wcscpy(VAR4, VAR5);
 FUN2(VAR4);
 free(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4(size_t VAR2[])
{
 size_t VAR3 = VAR2[2];
 {
 wchar_t * VAR4;
 if (VAR3 > wcslen(VAR5) && VAR3 < 100)
 {
 VAR4 = (wchar_t *)malloc(VAR3*sizeof(wchar_t));
 wcscpy(VAR4, VAR5);
 FUN2(VAR4);
 free(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
