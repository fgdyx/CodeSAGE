#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_67_structType VAR2);
void FUN2()
{
 VAR3 * VAR4;
 CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_67_structType VAR2;
 VAR3 * VAR5 = (VAR3 *)FUN3(50*sizeof(VAR3));
 VAR3 * VAR6 = (VAR3 *)FUN3(100*sizeof(VAR3));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR4 = VAR5;
 VAR2.VAR7 = VAR4;
 FUN1(VAR2);
}
#endif
