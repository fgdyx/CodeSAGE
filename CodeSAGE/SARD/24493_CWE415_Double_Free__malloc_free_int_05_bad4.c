#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
 }
 if(VAR3)
 {
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
 }
}
#endif
