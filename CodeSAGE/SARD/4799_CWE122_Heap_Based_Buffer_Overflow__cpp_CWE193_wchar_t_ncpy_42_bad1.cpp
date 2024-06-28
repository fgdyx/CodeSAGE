#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new wchar_t[10];
 return VAR2;
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcsncpy(VAR2, VAR3, wcslen(VAR3) + 1);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
