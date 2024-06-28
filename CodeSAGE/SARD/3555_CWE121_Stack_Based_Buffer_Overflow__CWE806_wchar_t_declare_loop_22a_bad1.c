#ifndef VAR1
int VAR2 = 0;
wchar_t * FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t VAR4[100];
 VAR3 = VAR4;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 wchar_t VAR5[50] = VAR6"";
 size_t VAR7, VAR8;
 VAR8 = wcslen(VAR3);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR5[VAR7] = VAR3[VAR7];
 }
 VAR5[50-1] = VAR6'';
 FUN3(VAR3);
 }
}
#endif
