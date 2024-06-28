#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 memcpy(VAR2, VAR4, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR5'';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t * VAR6 = (wchar_t *)FUN4(50*sizeof(wchar_t));
 wchar_t * VAR7 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 VAR2 = VAR7;
 VAR2[0] = VAR5'';
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN3();
}
#endif
