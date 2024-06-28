#ifndef VAR1
int VAR2 = 0;
void FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR3);
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
