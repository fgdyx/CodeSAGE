#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR4 - 8;
 }
 {
 wchar_t * VAR2 = VAR3;
 {
 size_t VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR2[VAR6] = VAR7[VAR6];
 }
 VAR2[100-1] = VAR5'';
 FUN2(VAR2);
 }
 }
}
#endif
