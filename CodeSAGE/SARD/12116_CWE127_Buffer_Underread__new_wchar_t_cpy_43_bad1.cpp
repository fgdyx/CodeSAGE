#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 {
 wchar_t * VAR3 = new wchar_t[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 wchar_t VAR5[100*2];
 wmemset(VAR5, VAR4'', 100*2-1);
 VAR5[100*2-1] = VAR4'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 wcscpy(VAR5, VAR2);
 FUN3(VAR5);
 }
}
#endif
