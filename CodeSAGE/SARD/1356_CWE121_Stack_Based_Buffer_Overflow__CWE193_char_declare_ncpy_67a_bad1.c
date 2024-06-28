#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_structType VAR2;
 char VAR4[10];
 char VAR5[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR3 = VAR4;
 VAR3[0] = '';
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
#endif
