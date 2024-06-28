#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fwprintf(VAR5, VAR2);
}
#endif
