#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 {
 wchar_t VAR5[50] = VAR6"";
 size_t VAR7, VAR8;
 VAR8 = wcslen(VAR4);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR5[VAR7] = VAR4[VAR7];
 }
 VAR5[50-1] = VAR6'';
 FUN2(VAR4);
 }
}
#endif
