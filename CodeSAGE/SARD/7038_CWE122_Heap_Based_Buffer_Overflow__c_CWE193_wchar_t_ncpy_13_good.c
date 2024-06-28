#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 }
 {
 wchar_t VAR4[10+1] = VAR5;
 wcsncpy(VAR2, VAR4, wcslen(VAR4) + 1);
 FUN3(VAR2);
 free(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 }
 {
 wchar_t VAR4[10+1] = VAR5;
 wcsncpy(VAR2, VAR4, wcslen(VAR4) + 1);
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
