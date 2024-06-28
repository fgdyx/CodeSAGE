#ifndef VAR1
void FUN1(long * VAR2);
void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)malloc(100*sizeof(long));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
 FUN1(VAR2);
}
#endif
