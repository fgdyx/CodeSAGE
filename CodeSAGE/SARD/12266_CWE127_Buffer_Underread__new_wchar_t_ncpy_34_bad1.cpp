#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 {
 wchar_t * VAR4 = new wchar_t[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR4 - 8;
 }
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 {
 wchar_t VAR8[100];
 wmemset(VAR8, VAR5'', 100-1);
 VAR8[100-1] = VAR5'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 wcsncpy(VAR8, VAR2, wcslen(VAR8));
 VAR8[100-1] = VAR5'';
 FUN2(VAR8);
 }
 }
}
#endif
