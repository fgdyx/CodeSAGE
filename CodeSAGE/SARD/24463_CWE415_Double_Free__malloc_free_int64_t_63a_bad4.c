#ifndef VAR1
void FUN1(VAR2 * * VAR3);
void FUN2()
{
 VAR2 * VAR4;
 VAR4 = NULL;
 VAR4 = (VAR2 *)malloc(100*sizeof(VAR2));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR4);
 FUN1(&VAR4);
}
#endif
