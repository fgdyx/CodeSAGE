#ifndef VAR1
int VAR2 = 0;
wchar_t * FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 wchar_t VAR4[50] = VAR5"";
 size_t VAR6, VAR7;
 VAR7 = wcslen(VAR3);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR4[VAR6] = VAR3[VAR6];
 }
 VAR4[50-1] = VAR5'';
 FUN3(VAR3);
 free(VAR3);
 }
}
#endif
