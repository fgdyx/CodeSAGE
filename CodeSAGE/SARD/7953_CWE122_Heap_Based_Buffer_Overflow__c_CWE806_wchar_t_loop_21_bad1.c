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
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 wchar_t VAR5[50] = VAR4"";
 size_t VAR6, VAR7;
 VAR7 = wcslen(VAR3);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR5[VAR6] = VAR3[VAR6];
 }
 VAR5[50-1] = VAR4'';
 FUN3(VAR3);
 free(VAR3);
 }
}
#endif
