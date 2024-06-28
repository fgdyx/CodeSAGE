#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fscanf_34_unionType VAR3;
 VAR2 = -1;
 VAR2 = 20;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 size_t VAR6;
 int *VAR7;
 VAR7 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR6 = 0; VAR6 < (VAR8)VAR2; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 FUN2(VAR7[0]);
 free(VAR7);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
