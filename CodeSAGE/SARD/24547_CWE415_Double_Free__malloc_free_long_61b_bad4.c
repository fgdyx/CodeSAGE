#ifndef VAR1
long * FUN1(long * VAR2)
{
 VAR2 = (long *)malloc(100*sizeof(long));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
 return VAR2;
}
#endif
