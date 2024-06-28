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
 wchar_t * VAR6 = VAR2;
 wchar_t * VAR2 = VAR6;
 {
 size_t VAR7, VAR8;
 wchar_t VAR9[100];
 wmemset(VAR9, VAR5'', 100-1);
 VAR9[100-1] = VAR5'';
 VAR8 = wcslen(VAR9);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR9[VAR7] = VAR2[VAR7];
 }
 VAR9[100-1] = VAR5'';
 FUN2(VAR9);
 }
 }
}
#endif
