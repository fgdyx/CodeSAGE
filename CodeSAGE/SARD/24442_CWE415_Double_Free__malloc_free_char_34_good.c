#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE415_Double_Free__malloc_free_char_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 free(VAR2);
 }
}
static void FUN2()
{
 char * VAR2;
 CWE415_Double_Free__malloc_free_char_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 free(VAR2);
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 ;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
