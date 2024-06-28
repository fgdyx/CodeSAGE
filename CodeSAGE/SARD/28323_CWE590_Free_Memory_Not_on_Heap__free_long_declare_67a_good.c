#ifndef VAR1
void FUN1(CWE590_Free_Memory_Not_on_Heap__free_long_declare_67_structType VAR2);
static void FUN2()
{
 long * VAR3;
 CWE590_Free_Memory_Not_on_Heap__free_long_declare_67_structType VAR2;
 VAR3 = NULL;
 {
 long * VAR4 = (long *)malloc(100*sizeof(long));
 if (VAR4 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5L;
 }
 }
 VAR3 = VAR4;
 }
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
