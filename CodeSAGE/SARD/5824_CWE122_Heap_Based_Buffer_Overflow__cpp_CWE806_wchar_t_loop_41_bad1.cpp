#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[50] = VAR4"";
 size_t VAR5, VAR6;
 VAR6 = wcslen(VAR2);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR3[VAR5] = VAR2[VAR5];
 }
 VAR3[50-1] = VAR4'';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN3()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 FUN1(VAR2);
}
#endif
