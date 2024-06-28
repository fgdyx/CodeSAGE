#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE415_Double_Free__malloc_free_char_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR2);
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR2);
 }
}
#endif
