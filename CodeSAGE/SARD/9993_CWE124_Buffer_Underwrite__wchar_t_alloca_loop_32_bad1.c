#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t * VAR5 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 {
 wchar_t * VAR2 = *VAR3;
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR5 - 8;
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 size_t VAR7;
 wchar_t VAR8[100];
 wmemset(VAR8, VAR6'', 100-1);
 VAR8[100-1] = VAR6'';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR2[VAR7] = VAR8[VAR7];
 }
 VAR2[100-1] = VAR6'';
 FUN3(VAR2);
 }
 }
}
#endif
