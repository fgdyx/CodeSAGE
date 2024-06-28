#ifndef VAR1
int VAR2 = 0;
wchar_t * FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 wchar_t VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcsncpy(VAR3, VAR4, wcslen(VAR4) + 1);
 FUN3(VAR3);
 delete [] VAR3;
 }
 ;
}
#endif
