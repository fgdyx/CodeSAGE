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
 memcpy(VAR4, VAR3, wcslen(VAR3)*sizeof(wchar_t));
 VAR4[50-1] = VAR5'';
 FUN3(VAR3);
 delete [] VAR3;
 }
 ;
}
#endif
