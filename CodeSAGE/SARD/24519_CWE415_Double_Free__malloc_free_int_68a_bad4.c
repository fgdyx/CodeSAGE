#ifndef VAR1
void FUN1();
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)malloc(100*sizeof(int));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
 VAR3 = VAR2;
 FUN1();
}
#endif
