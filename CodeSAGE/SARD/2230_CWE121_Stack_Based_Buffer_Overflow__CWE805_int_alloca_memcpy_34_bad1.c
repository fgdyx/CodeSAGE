#ifndef VAR1
void FUN1()
{
 int * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_34_unionType VAR3;
 int * VAR4 = (int *)FUN2(50*sizeof(int));
 int * VAR5 = (int *)FUN2(100*sizeof(int));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR4;
 VAR3.VAR6 = VAR2;
 {
 int * VAR2 = VAR3.VAR7;
 {
 int VAR8[100] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR2, VAR8, 100*sizeof(int));
 FUN3(VAR2[0]);
 }
 }
}
#endif
