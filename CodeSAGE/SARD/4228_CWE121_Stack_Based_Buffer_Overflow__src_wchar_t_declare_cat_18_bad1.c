#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 goto VAR4;
VAR4:
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR5'', 100-1);
 VAR2[100-1] = VAR5'';
 {
 wchar_t VAR6[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
 wcscat(VAR6, VAR2);
 FUN2(VAR2);
 }
}
#endif
