#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 if(VAR4==5)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR5'', 100-1);
 VAR2[100-1] = VAR5'';
 }
 {
 wchar_t VAR6[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memmove(VAR6, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR6[50-1] = VAR5'';
 FUN3(VAR2);
 }
}
#endif
