#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR4, wcslen(VAR2), VAR5"", VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
