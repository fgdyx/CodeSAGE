#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_cpy_34_unionType VAR3;
 char VAR4[10];
 char VAR5[10+1];
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR4;
 VAR2[0] = '';
 VAR3.VAR6 = VAR2;
 {
 char * VAR2 = VAR3.VAR7;
 {
 char VAR8[10+1] = VAR9;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strcpy(VAR2, VAR8);
 FUN2(VAR2);
 }
 }
}
#endif
