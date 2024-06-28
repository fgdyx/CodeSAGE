#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE126_Buffer_Overread__wchar_t_alloca_memcpy_34_unionType VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN2(50*sizeof(wchar_t));
 wchar_t * VAR5 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR4, VAR6'', 50-1);
 VAR4[50-1] = VAR6'';
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR4;
 VAR3.VAR7 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR8;
 {
 wchar_t VAR9[100];
 wmemset(VAR9, VAR6'', 100-1);
 VAR9[100-1] = VAR6'';
 /* POTENTIAL FLAW: using memcpy with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memcpy(VAR9, VAR2, wcslen(VAR9)*sizeof(wchar_t));
 VAR9[100-1] = VAR6'';
 FUN3(VAR9);
 }
 }
}
#endif
