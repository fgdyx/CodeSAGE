#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 wchar_t VAR4[50];
 wchar_t VAR5[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 VAR3[0] = VAR6'';
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
