#ifndef VAR1
void FUN1(wchar_t * * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR3);
 FUN1(&VAR3);
}
#endif
