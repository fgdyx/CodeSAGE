#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_67_structType VAR2;
 char * VAR4 = (char *)FUN3((10)*sizeof(char));
 char * VAR5 = (char *)FUN3((10+1)*sizeof(char));
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR3 = VAR4;
 VAR3[0] = '';
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
#endif
