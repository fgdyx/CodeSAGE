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
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memmove(VAR3, VAR4, (wcslen(VAR4) + 1) * sizeof(wchar_t));
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
