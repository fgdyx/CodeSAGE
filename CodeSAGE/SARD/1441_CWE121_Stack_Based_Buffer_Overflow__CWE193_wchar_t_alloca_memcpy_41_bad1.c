#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memcpy(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 wchar_t * VAR5 = (wchar_t *)FUN4((10)*sizeof(wchar_t));
 wchar_t * VAR6 = (wchar_t *)FUN4((10+1)*sizeof(wchar_t));
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR5;
 VAR2[0] = VAR7'';
 FUN1(VAR2);
}
#endif
