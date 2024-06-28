#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR3[50] = VAR4"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN3(VAR3, wcslen(VAR2), VAR4"", VAR2);
 FUN4(VAR2);
 delete [] VAR2;
 }
}
#endif
