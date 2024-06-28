#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR4 - 8;
 {
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR6[100*2];
 wmemset(VAR6, VAR5'', 100*2-1);
 VAR6[100*2-1] = VAR5'';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 wcscpy(VAR6, VAR2);
 FUN3(VAR6);
 }
 }
}
#endif
