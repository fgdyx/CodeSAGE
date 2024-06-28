#ifndef VAR1
static long * FUN1(long * VAR2)
{
 VAR2 = (long *)malloc(100*sizeof(long));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
 return VAR2;
}
void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
}
#endif
