#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[50];
 wchar_t VAR4[100];
 wmemset(VAR3, VAR5'', 50-1);
 VAR3[50-1] = VAR5'';
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR3;
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 /* POTENTIAL FLAW: using memcpy with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memcpy(VAR6, VAR2, wcslen(VAR6)*sizeof(wchar_t));
 VAR6[100-1] = VAR5'';
 FUN2(VAR6);
 }
}
#endif
