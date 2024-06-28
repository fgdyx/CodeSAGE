#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
 if(FUN3())
 {
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR3;
 VAR2[0] = VAR5'';
 }
 {
 wchar_t VAR6[10+1] = VAR7;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memcpy(VAR2, VAR6, (wcslen(VAR6) + 1) * sizeof(wchar_t));
 FUN4(VAR2);
 }
}
#endif
