#ifndef VAR1
void FUN1(CWE126_Buffer_Overread__wchar_t_declare_loop_67_structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 CWE126_Buffer_Overread__wchar_t_declare_loop_67_structType VAR2;
 wchar_t VAR4[50];
 wchar_t VAR5[100];
 wmemset(VAR4, VAR6'', 50-1);
 VAR4[50-1] = VAR6'';
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 /* FLAW: Set data pointer to a small buffer */
 VAR3 = VAR4;
 VAR2.VAR7 = VAR3;
 FUN1(VAR2);
}
#endif
