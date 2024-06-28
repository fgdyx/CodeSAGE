#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 CWE590_Free_Memory_Not_on_Heap__free_long_static_34_unionType VAR3;
 VAR2 = NULL;
 {
 long * VAR4 = (long *)malloc(100*sizeof(long));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5L;
 }
 }
 VAR2 = VAR4;
 }
 VAR3.VAR6 = VAR2;
 {
 long * VAR2 = VAR3.VAR7;
 FUN4(VAR2[0]);
 free(VAR2);
 }
}
void FUN5()
{
 FUN1();
}
#endif
