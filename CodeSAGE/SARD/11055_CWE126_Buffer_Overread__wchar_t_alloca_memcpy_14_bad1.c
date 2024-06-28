#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(50*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR3, VAR5'', 50-1);
 VAR3[50-1] = VAR5'';
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 if(VAR6==5)
 {
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR3;
 }
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 /* POTENTIAL FLAW: using memcpy with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memcpy(VAR7, VAR2, wcslen(VAR7)*sizeof(wchar_t));
 VAR7[100-1] = VAR5'';
 FUN3(VAR7);
 }
}
#endif
