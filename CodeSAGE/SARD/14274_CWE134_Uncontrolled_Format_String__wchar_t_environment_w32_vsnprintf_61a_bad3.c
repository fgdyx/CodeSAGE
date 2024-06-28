#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
static void FUN2(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN3(VAR5, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 _vsnwprintf(VAR3, 100-1, VAR2, VAR5);
 FUN4(VAR5);
 FUN5(VAR3);
 }
}
void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 VAR2 = FUN1(VAR2);
 FUN2(VAR2, VAR2);
}
#endif
