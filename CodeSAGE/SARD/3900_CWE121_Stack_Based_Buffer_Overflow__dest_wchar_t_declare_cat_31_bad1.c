#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[50];
 wchar_t VAR4[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR3;
 VAR2[0] = VAR5'';
 {
 wchar_t * VAR6 = VAR2;
 wchar_t * VAR2 = VAR6;
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 /* POTENTIAL FLAW: Possible buffer overflow if the sizeof(data)-strlen(data) is less than the length of source */
 wcscat(VAR2, VAR7);
 FUN2(VAR2);
 }
 }
}
#endif
