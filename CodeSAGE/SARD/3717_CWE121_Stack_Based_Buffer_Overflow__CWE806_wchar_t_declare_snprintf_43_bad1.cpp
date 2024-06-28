#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
}
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[100];
 VAR2 = VAR4;
 FUN1(VAR2);
 {
 wchar_t VAR5[50] = VAR3"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN3(VAR5, wcslen(VAR2), VAR3"", VAR2);
 FUN4(VAR2);
 }
}
#endif
