#ifndef VAR1
int VAR2 = 0;
wchar_t * FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR3 = VAR4;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 wchar_t VAR5[50] = VAR6"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN4(VAR5, wcslen(VAR3), VAR6"", VAR3);
 FUN5(VAR3);
 }
}
#endif
