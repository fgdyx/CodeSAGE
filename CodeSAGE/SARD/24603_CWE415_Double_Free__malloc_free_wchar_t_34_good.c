#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE415_Double_Free__malloc_free_wchar_t_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR3.VAR4 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR5;
 free(VAR2);
 }
}
static void FUN2()
{
 wchar_t * VAR2;
 CWE415_Double_Free__malloc_free_wchar_t_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 free(VAR2);
 VAR3.VAR4 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR5;
 ;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
