#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR2 = VAR4;
 {
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 memcpy(VAR6, VAR2, 100*sizeof(wchar_t));
 VAR6[100-1] = VAR5'';
 FUN3(VAR6);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
