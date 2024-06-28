#ifndef VAR1
void FUN1(CWE415_Double_Free__malloc_free_wchar_t_67_structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 CWE415_Double_Free__malloc_free_wchar_t_67_structType VAR2;
 VAR3 = NULL;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR3);
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
