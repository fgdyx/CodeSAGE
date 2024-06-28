#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR3);
 VAR4* VAR5 = new VAR6;
 VAR5->FUN2(VAR3);
 delete VAR5;
}
#endif
