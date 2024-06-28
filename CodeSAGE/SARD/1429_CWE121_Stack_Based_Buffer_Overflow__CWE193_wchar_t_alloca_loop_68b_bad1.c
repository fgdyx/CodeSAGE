#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[10+1] = VAR5;
 size_t VAR6, VAR7;
 VAR7 = wcslen(VAR4);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR6 = 0; VAR6 < VAR7 + 1; VAR6++)
 {
 VAR2[VAR6] = VAR4[VAR6];
 }
 FUN2(VAR2);
 }
}
#endif
