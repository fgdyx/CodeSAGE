#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t * VAR5 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR4 = VAR5;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR4, VAR6'', 100-1);
 VAR4[100-1] = VAR6'';
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 FUN1(VAR3);
}
#endif
