#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN3(50*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 wmemset(VAR3, VAR5'', 50-1);
 VAR3[50-1] = VAR5'';
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR3;
 FUN1(VAR2);
}
#endif
