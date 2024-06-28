#ifndef VAR1
void FUN1(wchar_t * * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 /* FLAW: Use a small buffer */
 VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 FUN1(&VAR3);
}
#endif
