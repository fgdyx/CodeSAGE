#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static wchar_t * FUN1(wchar_t * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 VAR4 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 }
 return VAR4;
}
static void FUN3()
{
 wchar_t * VAR4;
 VAR4 = NULL;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 wchar_t VAR5[10+1] = VAR6;
 memmove(VAR4, VAR5, (wcslen(VAR5) + 1) * sizeof(wchar_t));
 FUN4(VAR4);
 free(VAR4);
 }
}
static wchar_t * FUN5(wchar_t * VAR4)
{
 if(VAR3)
 {
 VAR4 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 }
 return VAR4;
}
static void FUN6()
{
 wchar_t * VAR4;
 VAR4 = NULL;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 wchar_t VAR5[10+1] = VAR6;
 memmove(VAR4, VAR5, (wcslen(VAR5) + 1) * sizeof(wchar_t));
 FUN4(VAR4);
 free(VAR4);
 }
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
