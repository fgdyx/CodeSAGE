#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE127_Buffer_Underread__wchar_t_alloca_loop_34_unionType VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR2 = VAR4;
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 {
 size_t VAR8;
 wchar_t VAR9[100];
 wmemset(VAR9, VAR5'', 100-1);
 VAR9[100-1] = VAR5'';
 for (VAR8 = 0; VAR8 < 100; VAR8++)
 {
 VAR9[VAR8] = VAR2[VAR8];
 }
 VAR9[100-1] = VAR5'';
 FUN3(VAR9);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
