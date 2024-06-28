#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 FUN1(&VAR3);
}
#endif
