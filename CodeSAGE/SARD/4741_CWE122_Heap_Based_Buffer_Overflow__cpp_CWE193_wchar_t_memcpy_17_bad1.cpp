#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = new wchar_t[10];
 }
 {
 wchar_t VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memcpy(VAR3, VAR4, (wcslen(VAR4) + 1) * sizeof(wchar_t));
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
