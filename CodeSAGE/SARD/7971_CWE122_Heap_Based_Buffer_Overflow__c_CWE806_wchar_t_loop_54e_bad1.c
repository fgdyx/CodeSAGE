#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[50] = VAR4"";
 size_t VAR5, VAR6;
 VAR6 = wcslen(VAR2);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR3[VAR5] = VAR2[VAR5];
 }
 VAR3[50-1] = VAR4'';
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
