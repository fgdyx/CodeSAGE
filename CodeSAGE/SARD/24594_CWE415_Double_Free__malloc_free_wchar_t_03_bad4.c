#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
 }
}
#endif
