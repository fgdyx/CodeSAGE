#ifndef VAR1
void FUN1(CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_67_structType VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_67_structType VAR2;
 VAR4 = NULL;
 {
 VAR3 * VAR5 = (VAR3 *)malloc(100*sizeof(VAR3));
 if (VAR5 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5LL;
 }
 }
 VAR4 = VAR5;
 }
 VAR2.VAR7 = VAR4;
 FUN1(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
