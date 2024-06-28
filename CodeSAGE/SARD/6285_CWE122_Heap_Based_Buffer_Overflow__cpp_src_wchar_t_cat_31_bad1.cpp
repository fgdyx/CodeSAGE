#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 {
 wchar_t * VAR4 = VAR2;
 wchar_t * VAR2 = VAR4;
 {
 wchar_t VAR5[50] = VAR3"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
 wcscat(VAR5, VAR2);
 FUN2(VAR2);
 delete [] VAR2;
 }
 }
}
#endif
