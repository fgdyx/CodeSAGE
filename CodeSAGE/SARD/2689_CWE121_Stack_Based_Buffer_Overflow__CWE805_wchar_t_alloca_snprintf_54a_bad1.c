#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN3(50*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR3;
 VAR2[0] = VAR5'';
 FUN1(VAR2);
}
#endif
