#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[100];
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
 wcscpy(VAR6, VAR3);
 FUN2(VAR3);
 }
}
#endif
