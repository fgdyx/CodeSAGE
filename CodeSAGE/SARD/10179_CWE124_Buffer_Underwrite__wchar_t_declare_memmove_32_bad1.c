#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[100];
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
 wchar_t VAR7[100];
 wmemset(VAR7, VAR6'', 100-1);
 VAR7[100-1] = VAR6'';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 memmove(VAR2, VAR7, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR6'';
 FUN2(VAR2);
 }
 }
}
#endif
