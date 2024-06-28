#ifndef VAR1
int VAR2 = 0;
wchar_t * FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = new wchar_t[100];
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 wchar_t VAR4[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN3(VAR4, wcslen(VAR3), VAR5"", VAR3);
 FUN4(VAR3);
 delete [] VAR3;
 }
 ;
}
#endif
