#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE127_Buffer_Underread__char_declare_cpy_34_unionType VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR4 - 8;
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[100*2];
 memset(VAR7, '', 100*2-1);
 VAR7[100*2-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 strcpy(VAR7, VAR2);
 FUN2(VAR7);
 }
 }
}
#endif
