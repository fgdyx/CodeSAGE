#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_unionType VAR4;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(sizeof(*VAR3));
 *VAR3 = 2147483643LL;
 VAR4.VAR5 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR6;
 FUN2(*VAR3);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
