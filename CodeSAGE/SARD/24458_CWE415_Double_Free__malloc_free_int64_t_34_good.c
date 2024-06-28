#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 CWE415_Double_Free__malloc_free_int64_t_34_unionType VAR4;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR4.VAR5 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR6;
 free(VAR3);
 }
}
static void FUN2()
{
 VAR2 * VAR3;
 CWE415_Double_Free__malloc_free_int64_t_34_unionType VAR4;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 free(VAR3);
 VAR4.VAR5 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR6;
 ;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
