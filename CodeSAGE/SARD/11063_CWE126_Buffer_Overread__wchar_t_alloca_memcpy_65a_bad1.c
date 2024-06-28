#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t * VAR5 = (wchar_t *)FUN3(50*sizeof(wchar_t));
 wchar_t * VAR6 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 wmemset(VAR5, VAR7'', 50-1);
 VAR5[50-1] = VAR7'';
 wmemset(VAR6, VAR7'', 100-1);
 VAR6[100-1] = VAR7'';
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR5;
 FUN4(VAR2);
}
#endif
