#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = new wchar_t[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 }
 {
 wchar_t VAR5[50] = VAR4"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memcpy(VAR5, VAR3, wcslen(VAR3)*sizeof(wchar_t));
 VAR5[50-1] = VAR4'';
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
