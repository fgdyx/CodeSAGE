#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_34_unionType VAR3;
 VAR2 = NULL;
 {
 wchar_t * VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR4 - 8;
 }
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 {
 wchar_t VAR8[100];
 wmemset(VAR8, VAR5'', 100-1);
 VAR8[100-1] = VAR5'';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 wcscpy(VAR2, VAR8);
 FUN2(VAR2);
 }
 }
}
#endif
