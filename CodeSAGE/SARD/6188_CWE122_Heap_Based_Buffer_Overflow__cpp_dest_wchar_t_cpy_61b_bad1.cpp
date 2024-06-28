#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new wchar_t[50];
 VAR2[0] = VAR3'';
 return VAR2;
}
#endif
