#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_34_unionType VAR3;
 int * VAR4 = (int *)FUN2(50*sizeof(int));
 int * VAR5 = (int *)FUN2(100*sizeof(int));
 VAR2 = VAR5;
 VAR3.VAR6 = VAR2;
 {
 int * VAR2 = VAR3.VAR7;
 {
 int VAR8[100] = {0};
 memcpy(VAR2, VAR8, 100*sizeof(int));
 FUN3(VAR2[0]);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
