#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 /* FLAW: Use a hardcoded password */
 wcscpy(VAR2, VAR5);
 FUN1(VAR2);
}
#endif
