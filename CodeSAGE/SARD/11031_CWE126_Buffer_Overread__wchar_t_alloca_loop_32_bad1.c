#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t * VAR5 = (wchar_t *)FUN2(50*sizeof(wchar_t));
 wchar_t * VAR6 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR5, VAR7'', 50-1);
 VAR5[50-1] = VAR7'';
 wmemset(VAR6, VAR7'', 100-1);
 VAR6[100-1] = VAR7'';
 {
 wchar_t * VAR2 = *VAR3;
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR5;
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 size_t VAR8, VAR9;
 wchar_t VAR10[100];
 wmemset(VAR10, VAR7'', 100-1);
 VAR10[100-1] = VAR7'';
 VAR9 = wcslen(VAR10);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR8 = 0; VAR8 < VAR9; VAR8++)
 {
 VAR10[VAR8] = VAR2[VAR8];
 }
 VAR10[100-1] = VAR7'';
 FUN3(VAR10);
 }
 }
}
#endif
