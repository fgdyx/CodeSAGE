#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3.FUN2();
 {
 wchar_t VAR5[100] = VAR6"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR5, 100-1, VAR4);
 FUN4(VAR5);
 }
}
#endif
