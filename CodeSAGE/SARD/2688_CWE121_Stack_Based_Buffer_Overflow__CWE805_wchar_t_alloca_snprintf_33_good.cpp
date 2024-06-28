#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t * VAR4 = (wchar_t *)FUN2(50*sizeof(wchar_t));
 wchar_t * VAR5 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR5;
 VAR2[0] = VAR6'';
 {
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR6'', 100-1);
 VAR7[100-1] = VAR6'';
 FUN3(VAR2, 100, VAR6"", VAR7);
 FUN4(VAR2);
 }
 }
}
void FUN5()
{
 FUN1();
}
#endif
