#ifndef VAR1
void FUN1(CWE127_Buffer_Underread__malloc_wchar_t_memmove_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 memmove(VAR5, VAR3, 100*sizeof(wchar_t));
 VAR5[100-1] = VAR6'';
 FUN2(VAR5);
 }
}
#endif
