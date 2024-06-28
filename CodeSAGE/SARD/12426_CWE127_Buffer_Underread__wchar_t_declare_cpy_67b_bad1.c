#ifndef VAR1
void FUN1(CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[100*2];
 wmemset(VAR5, VAR6'', 100*2-1);
 VAR5[100*2-1] = VAR6'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 wcscpy(VAR5, VAR3);
 FUN2(VAR5);
 }
}
#endif
