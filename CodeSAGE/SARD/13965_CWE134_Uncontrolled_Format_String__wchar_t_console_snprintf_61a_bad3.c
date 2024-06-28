#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR5[100] = VAR4"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR5, 100-1, VAR2);
 FUN4(VAR5);
 }
}
#endif
