#ifndef VAR1
void FUN1(CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType VAR2;
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR3 = VAR4;
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
