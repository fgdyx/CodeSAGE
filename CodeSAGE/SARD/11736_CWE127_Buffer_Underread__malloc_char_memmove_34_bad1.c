#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE127_Buffer_Underread__malloc_char_memmove_34_unionType VAR3;
 VAR2 = NULL;
 {
 char * VAR4 = (char *)malloc(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR4 - 8;
 }
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 memmove(VAR7, VAR2, 100*sizeof(char));
 VAR7[100-1] = '';
 FUN2(VAR7);
 }
 }
}
#endif
