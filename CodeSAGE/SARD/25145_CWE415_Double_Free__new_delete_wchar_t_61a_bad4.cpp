#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR2;
}
#endif
