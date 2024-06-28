#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = (wchar_t *)malloc(10*sizeof(wchar_t));
 }
 {
 wchar_t VAR4[10+1] = VAR5;
 size_t VAR2, VAR6;
 VAR6 = wcslen(VAR4);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR2 = 0; VAR2 < VAR6 + 1; VAR2++)
 {
 VAR3[VAR2] = VAR4[VAR2];
 }
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
