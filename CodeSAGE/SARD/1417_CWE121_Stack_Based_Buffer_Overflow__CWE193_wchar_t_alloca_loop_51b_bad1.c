#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[10+1] = VAR4;
 size_t VAR5, VAR6;
 VAR6 = wcslen(VAR3);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR5 = 0; VAR5 < VAR6 + 1; VAR5++)
 {
 VAR2[VAR5] = VAR3[VAR5];
 }
 FUN2(VAR2);
 }
}
#endif
