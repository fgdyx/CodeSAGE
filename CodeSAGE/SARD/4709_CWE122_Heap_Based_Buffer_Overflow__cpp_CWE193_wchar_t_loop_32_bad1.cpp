#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR2 = *VAR3;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new wchar_t[10];
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR5[10+1] = VAR6;
 size_t VAR7, VAR8;
 VAR8 = wcslen(VAR5);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
 {
 VAR2[VAR7] = VAR5[VAR7];
 }
 FUN2(VAR2);
 delete [] VAR2;
 }
 }
}
#endif
