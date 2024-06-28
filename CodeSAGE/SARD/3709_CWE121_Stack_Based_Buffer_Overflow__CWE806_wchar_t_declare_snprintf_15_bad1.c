#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 break;
 default:
 FUN2("");
 break;
 }
 {
 wchar_t VAR5[50] = VAR4"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN3(VAR5, wcslen(VAR2), VAR4"", VAR2);
 FUN4(VAR2);
 }
}
#endif
