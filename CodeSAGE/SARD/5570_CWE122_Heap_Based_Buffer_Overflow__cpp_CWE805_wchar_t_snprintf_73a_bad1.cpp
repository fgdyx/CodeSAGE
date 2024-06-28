#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 VAR4 = NULL;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR4 = new wchar_t[50];
 VAR4[0] = VAR5'';
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
#endif
