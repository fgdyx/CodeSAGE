#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memmove(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR6;
 wchar_t VAR7[10];
 wchar_t VAR8[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR7;
 VAR2[0] = VAR9'';
 FUN4(VAR2);
}
#endif
