#ifndef VAR1
static void FUN1(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR3);
}
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR3);
}
#endif
