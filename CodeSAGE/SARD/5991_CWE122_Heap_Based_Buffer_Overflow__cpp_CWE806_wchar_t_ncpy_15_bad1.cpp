#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 switch(6)
 {
 case 6:
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 break;
 default:
 FUN2("");
 break;
 }
 {
 wchar_t VAR4[50] = VAR3"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 wcsncpy(VAR4, VAR2, wcslen(VAR2));
 VAR4[50-1] = VAR3'';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
