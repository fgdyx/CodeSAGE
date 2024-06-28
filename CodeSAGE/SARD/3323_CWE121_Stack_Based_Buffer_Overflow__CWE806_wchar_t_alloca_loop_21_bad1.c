#ifndef VAR1
static int VAR2 = 0;
static wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 }
 return VAR3;
}
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR5 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR3 = VAR5;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 wchar_t VAR6[50] = VAR4"";
 size_t VAR7, VAR8;
 VAR8 = wcslen(VAR3);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR6[VAR7] = VAR3[VAR7];
 }
 VAR6[50-1] = VAR4'';
 FUN4(VAR3);
 }
}
#endif
