#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR3);
 }
 else
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR3);
 }
 else
 {
 ;
 }
}
#endif
