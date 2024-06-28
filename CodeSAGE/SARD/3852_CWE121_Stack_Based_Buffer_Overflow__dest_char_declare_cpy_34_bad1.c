#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__dest_char_declare_cpy_34_unionType VAR3;
 char VAR4[50];
 char VAR5[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR4;
 VAR2[0] = '';
 VAR3.VAR6 = VAR2;
 {
 char * VAR2 = VAR3.VAR7;
 {
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 strcpy(VAR2, VAR8);
 FUN2(VAR2);
 }
 }
}
#endif
