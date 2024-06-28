#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_67_structType VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_67_structType VAR2;
 VAR3 * VAR5 = (VAR3 *)FUN3(50*sizeof(VAR3));
 VAR3 * VAR6 = (VAR3 *)FUN3(100*sizeof(VAR3));
 VAR4 = VAR6;
 VAR2.VAR7 = VAR4;
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
