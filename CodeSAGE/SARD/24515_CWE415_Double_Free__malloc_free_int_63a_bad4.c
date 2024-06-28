#ifndef VAR1
void FUN1(int * * VAR2);
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 VAR3 = (int *)malloc(100*sizeof(int));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR3);
 FUN1(&VAR3);
}
#endif
