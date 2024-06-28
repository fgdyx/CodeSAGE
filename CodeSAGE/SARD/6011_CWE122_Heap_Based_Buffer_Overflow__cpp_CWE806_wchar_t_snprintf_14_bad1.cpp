#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 if(VAR3==5)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 }
 {
 wchar_t VAR5[50] = VAR4"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR5, wcslen(VAR2), VAR4"", VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
