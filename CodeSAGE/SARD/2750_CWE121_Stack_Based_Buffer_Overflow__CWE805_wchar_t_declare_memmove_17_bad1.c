#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[50];
 wchar_t VAR5[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 VAR3[0] = VAR6'';
 }
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR6'', 100-1);
 VAR7[100-1] = VAR6'';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 memmove(VAR3, VAR7, 100*sizeof(wchar_t));
 VAR3[100-1] = VAR6'';
 FUN2(VAR3);
 }
}
#endif
