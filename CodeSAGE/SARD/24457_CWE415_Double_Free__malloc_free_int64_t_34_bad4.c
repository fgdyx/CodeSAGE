#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 CWE415_Double_Free__malloc_free_int64_t_34_unionType VAR4;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR3);
 VAR4.VAR5 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR6;
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR3);
 }
}
#endif
