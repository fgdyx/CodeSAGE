#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new wchar_t[50];
 VAR2[0] = VAR3'';
}
#endif
