#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 }
 {
 wchar_t VAR5[50] = VAR4"";
 FUN3(VAR5, wcslen(VAR2), VAR4"", VAR2);
 FUN4(VAR2);
 free(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if(VAR6)
 {
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 }
 {
 wchar_t VAR5[50] = VAR4"";
 FUN3(VAR5, wcslen(VAR2), VAR4"", VAR2);
 FUN4(VAR2);
 free(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
