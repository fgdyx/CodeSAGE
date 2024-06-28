#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 goto VAR3;
VAR3:
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 {
 wchar_t VAR5[50] = VAR4"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memmove(VAR5, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR5[50-1] = VAR4'';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
