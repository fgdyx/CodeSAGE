#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR4, wcslen(VAR2), VAR5"", VAR2);
 FUN3(VAR2);
 }
}
void FUN4()
{
 wchar_t * VAR2;
 wchar_t * VAR6 = (wchar_t *)FUN5(100*sizeof(wchar_t));
 VAR2 = VAR6;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR5'', 100-1);
 VAR2[100-1] = VAR5'';
 VAR3 = VAR2;
 FUN1();
}
#endif
