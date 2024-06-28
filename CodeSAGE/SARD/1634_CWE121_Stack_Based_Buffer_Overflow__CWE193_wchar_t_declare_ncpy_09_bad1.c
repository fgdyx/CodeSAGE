#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 if(VAR5)
 {
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR3;
 VAR2[0] = VAR6'';
 }
 {
 wchar_t VAR7[10+1] = VAR8;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcsncpy(VAR2, VAR7, wcslen(VAR7) + 1);
 FUN2(VAR2);
 }
}
#endif
