#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_67_structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 {
 int64_t VAR6[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR4, VAR6, 100*sizeof(VAR3));
 FUN2(VAR4[0]);
 }
}
#endif
