#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t * VAR5 = (wchar_t *)FUN2(50*sizeof(wchar_t));
 wchar_t * VAR6 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 {
 wchar_t * VAR2 = *VAR3;
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR5;
 VAR2[0] = VAR7'';
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR8[100];
 wmemset(VAR8, VAR7'', 100-1);
 VAR8[100-1] = VAR7'';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 wcsncpy(VAR2, VAR8, 100-1);
 VAR2[100-1] = VAR7'';
 FUN3(VAR2);
 }
 }
}
#endif
