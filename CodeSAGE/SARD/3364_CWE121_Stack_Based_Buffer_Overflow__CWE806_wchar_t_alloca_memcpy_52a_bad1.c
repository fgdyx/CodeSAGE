#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR2 = VAR3;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 FUN1(VAR2);
}
#endif
