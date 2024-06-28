#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(50*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 }
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 wcsncpy(VAR2, VAR6, 100-1);
 VAR2[100-1] = VAR5'';
 FUN5(VAR2);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(50*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 if(FUN7())
 {
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 }
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 wcsncpy(VAR2, VAR6, 100-1);
 VAR2[100-1] = VAR5'';
 FUN5(VAR2);
 }
}
void FUN8()
{
 FUN1();
 FUN6();
}
#endif
