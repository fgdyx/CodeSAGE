#ifndef VAR1
void FUN1();
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 VAR4 = VAR2;
 FUN1();
}
#endif
