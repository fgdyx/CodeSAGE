#ifndef VAR1
void FUN1(long * * VAR2);
void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 VAR3 = (long *)malloc(100*sizeof(long));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR3);
 FUN1(&VAR3);
}
#endif
