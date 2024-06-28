#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memcpy(VAR4, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR4[50-1] = VAR5'';
 FUN2(VAR2);
 }
}
#endif
