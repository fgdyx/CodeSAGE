#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(size_t VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t * VAR6;
 if (VAR5 > wcslen(VAR7) && VAR5 < 100)
 {
 VAR6 = (wchar_t *)malloc(VAR5*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN3(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN4(size_t VAR5)
{
 if(VAR3)
 {
 {
 wchar_t * VAR6;
 if (VAR5 > wcslen(VAR7) && VAR5 < 100)
 {
 VAR6 = (wchar_t *)malloc(VAR5*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN3(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN5(size_t VAR5)
{
 if(VAR4)
 {
 {
 wchar_t * VAR6;
 if (VAR5 > wcslen(VAR7))
 {
 VAR6 = (wchar_t *)malloc(VAR5*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN3(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
#endif
