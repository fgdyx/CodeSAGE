#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 CWE590_Free_Memory_Not_on_Heap__free_int64_t_declare_34_unionType VAR4;
 VAR3 = NULL;
 {
 VAR2 * VAR5 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR5 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5LL;
 }
 }
 VAR3 = VAR5;
 }
 VAR4.VAR7 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR8;
 FUN4(VAR3[0]);
 free(VAR3);
 }
}
void FUN5()
{
 FUN1();
}
#endif
