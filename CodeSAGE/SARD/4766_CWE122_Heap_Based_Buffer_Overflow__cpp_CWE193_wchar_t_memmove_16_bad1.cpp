#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new wchar_t[10];
 break;
 }
 {
 wchar_t VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memmove(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
