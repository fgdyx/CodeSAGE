#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memcpy(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR6;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (wchar_t *)malloc(10*sizeof(wchar_t));
 FUN4(VAR2);
}
#endif
