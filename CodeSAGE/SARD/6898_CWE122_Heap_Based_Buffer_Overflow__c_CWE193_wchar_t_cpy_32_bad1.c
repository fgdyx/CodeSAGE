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
 VAR2 = (wchar_t *)malloc(10*sizeof(wchar_t));
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR5[10+1] = VAR6;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcscpy(VAR2, VAR5);
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
#endif
