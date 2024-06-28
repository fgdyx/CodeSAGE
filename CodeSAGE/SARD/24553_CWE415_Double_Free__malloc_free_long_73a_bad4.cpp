#ifndef VAR1
void FUN1(VAR2<long *> VAR3);
void FUN2()
{
 long * VAR4;
 VAR2<long *> VAR3;
 VAR4 = NULL;
 VAR4 = (long *)malloc(100*sizeof(long));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
#endif
