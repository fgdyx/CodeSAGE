#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 {
 wchar_t VAR5[50] = VAR6"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR5, wcslen(VAR4), VAR6"", VAR4);
 FUN3(VAR4);
 delete [] VAR4;
 }
}
#endif
