#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
 wcsncat(VAR4, VAR2, wcslen(VAR2));
 VAR4[50-1] = VAR5'';
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR5'', 100-1);
 VAR2[100-1] = VAR5'';
 VAR3 = VAR2;
 FUN1();
}
#endif
