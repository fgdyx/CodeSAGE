#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memcpy(VAR2, VAR4, (wcslen(VAR4) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR6[10];
 wchar_t VAR7[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR6;
 VAR2[0] = VAR8'';
 VAR3 = VAR2;
 FUN1();
}
#endif
