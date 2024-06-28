#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 return VAR2;
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR4[50] = VAR3"";
 size_t VAR5, VAR6;
 VAR6 = wcslen(VAR2);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR4[VAR5] = VAR2[VAR5];
 }
 VAR4[50-1] = VAR3'';
 FUN3(VAR2);
 free(VAR2);
 }
}
#endif
