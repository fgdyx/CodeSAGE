#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_memcpy_34_unionType VAR3;
 char VAR4[100];
 VAR2 = VAR4;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memcpy(VAR7, VAR2, strlen(VAR2)*sizeof(char));
 VAR7[50-1] = '';
 FUN2(VAR2);
 }
 }
}
#endif
