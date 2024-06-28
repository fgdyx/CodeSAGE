#ifndef VAR1
void FUN1();
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 /* FLAW: Use a small buffer */
 VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 VAR4 = VAR2;
 FUN1();
}
#endif
