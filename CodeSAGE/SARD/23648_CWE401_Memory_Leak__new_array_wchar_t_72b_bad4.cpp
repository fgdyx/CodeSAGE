#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
