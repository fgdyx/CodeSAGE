#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[50] = VAR4"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memcpy(VAR3, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR3[50-1] = VAR4'';
 FUN2(VAR2);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 wchar_t * VAR5 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 VAR2 = VAR5;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 FUN1(VAR2);
}
#endif
