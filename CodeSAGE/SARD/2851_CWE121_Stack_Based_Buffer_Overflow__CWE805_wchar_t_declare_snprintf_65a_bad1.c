#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[50];
 wchar_t VAR6[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR5;
 VAR2[0] = VAR7'';
 FUN3(VAR2);
}
#endif
