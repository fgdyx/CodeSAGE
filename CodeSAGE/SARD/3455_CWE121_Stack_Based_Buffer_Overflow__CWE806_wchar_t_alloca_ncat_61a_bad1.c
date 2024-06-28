#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR4[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
 wcsncat(VAR4, VAR2, wcslen(VAR2));
 VAR4[50-1] = VAR5'';
 FUN4(VAR2);
 }
}
#endif
