#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE127_Buffer_Underread__wchar_t_alloca_memcpy_34_unionType VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR2 = VAR4;
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 {
 wchar_t VAR8[100];
 wmemset(VAR8, VAR5'', 100-1);
 VAR8[100-1] = VAR5'';
 memcpy(VAR8, VAR2, 100*sizeof(wchar_t));
 VAR8[100-1] = VAR5'';
 FUN3(VAR8);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
