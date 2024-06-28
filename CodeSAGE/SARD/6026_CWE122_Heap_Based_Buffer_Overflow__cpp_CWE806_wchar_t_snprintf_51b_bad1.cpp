#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[50] = VAR4"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR3, wcslen(VAR2), VAR4"", VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
