#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 wcscpy(VAR2, VAR3);
 FUN2(VAR2);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR5[50];
 wchar_t VAR6[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR5;
 VAR2[0] = VAR4'';
 FUN1(VAR2);
}
#endif
