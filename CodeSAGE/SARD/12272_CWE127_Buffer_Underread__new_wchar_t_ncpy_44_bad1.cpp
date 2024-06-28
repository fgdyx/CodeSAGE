#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 wcsncpy(VAR3, VAR2, wcslen(VAR3));
 VAR3[100-1] = VAR4'';
 FUN2(VAR3);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR6;
 VAR2 = NULL;
 {
 wchar_t * VAR7 = new wchar_t[100];
 wmemset(VAR7, VAR4'', 100-1);
 VAR7[100-1] = VAR4'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR7 - 8;
 }
 FUN4(VAR2);
}
#endif
