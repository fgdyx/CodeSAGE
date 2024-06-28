#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR3, VAR5'', 100-1);
 VAR3[100-1] = VAR5'';
 }
 {
 wchar_t VAR6[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memmove(VAR6, VAR3, wcslen(VAR3)*sizeof(wchar_t));
 VAR6[50-1] = VAR5'';
 FUN3(VAR3);
 }
}
#endif
