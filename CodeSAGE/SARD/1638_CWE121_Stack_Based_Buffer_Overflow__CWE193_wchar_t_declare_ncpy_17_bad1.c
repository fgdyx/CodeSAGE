#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[10];
 wchar_t VAR5[10+1];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR3 = VAR4;
 VAR3[0] = VAR6'';
 }
 {
 wchar_t VAR7[10+1] = VAR8;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcsncpy(VAR3, VAR7, wcslen(VAR7) + 1);
 FUN2(VAR3);
 }
}
#endif
