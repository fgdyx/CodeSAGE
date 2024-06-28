#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 memcpy(VAR2, VAR4, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR5'';
 FUN2(VAR2);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 wchar_t * VAR6 = (wchar_t *)FUN4(50*sizeof(wchar_t));
 wchar_t * VAR7 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR6;
 VAR2[0] = VAR5'';
 VAR3 = VAR2;
 FUN1();
}
#endif
