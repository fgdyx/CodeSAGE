#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR4, wcslen(VAR3), VAR5"", VAR3);
 FUN3(VAR3);
 }
}
#endif
