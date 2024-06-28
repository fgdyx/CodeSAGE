#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 CWE590_Free_Memory_Not_on_Heap__free_int_alloca_34_unionType VAR3;
 VAR2 = NULL;
 {
 int * VAR4 = (int *)malloc(100*sizeof(int));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5;
 }
 }
 VAR2 = VAR4;
 }
 VAR3.VAR6 = VAR2;
 {
 int * VAR2 = VAR3.VAR7;
 FUN4(VAR2[0]);
 free(VAR2);
 }
}
void FUN5()
{
 FUN1();
}
#endif
