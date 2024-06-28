#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 {
 wchar_t VAR5[50] = VAR6"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memcpy(VAR5, VAR4, wcslen(VAR4)*sizeof(wchar_t));
 VAR5[50-1] = VAR6'';
 FUN2(VAR4);
 delete [] VAR4;
 }
}
#endif
