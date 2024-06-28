#ifndef VAR1
void FUN1(CWE415_Double_Free__malloc_free_wchar_t_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR3);
}
#endif
