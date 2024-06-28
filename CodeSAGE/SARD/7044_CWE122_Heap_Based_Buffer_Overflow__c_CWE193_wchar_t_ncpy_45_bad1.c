#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcsncpy(VAR2, VAR4, wcslen(VAR4) + 1);
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (wchar_t *)malloc(10*sizeof(wchar_t));
 VAR3 = VAR2;
 FUN1();
}
#endif
