#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
 goto VAR5;
VAR5:
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR3;
 VAR2[0] = VAR6'';
 {
 wchar_t VAR5[10+1] = VAR7;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memcpy(VAR2, VAR5, (wcslen(VAR5) + 1) * sizeof(wchar_t));
 FUN3(VAR2);
 }
}
#endif
