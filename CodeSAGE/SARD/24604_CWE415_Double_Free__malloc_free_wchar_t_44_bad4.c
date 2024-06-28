#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
}
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
 FUN3(VAR2);
}
#endif
