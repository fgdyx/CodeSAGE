#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE590_Free_Memory_Not_on_Heap__free_char_static_34_unionType VAR3;
 VAR2 = NULL;
 {
 char * VAR4 = (char *)malloc(100*sizeof(char));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
