#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 return VAR2;
}
#endif
