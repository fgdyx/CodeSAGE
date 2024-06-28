#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN3(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN4(VAR2, VAR3);
 FUN5(VAR3);
 }
}
void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 FUN1(VAR2);
 FUN2(VAR2, VAR2);
}
#endif
