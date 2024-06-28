#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new wchar_t[10];
 {
 wchar_t VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcsncpy(VAR2, VAR3, wcslen(VAR3) + 1);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
