#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[10];
 wchar_t VAR6[10+1];
 {
 wchar_t * VAR2 = *VAR3;
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR5;
 VAR2[0] = VAR7'';
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR8[10+1] = VAR9;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcsncpy(VAR2, VAR8, wcslen(VAR8) + 1);
 FUN2(VAR2);
 }
 }
}
#endif
