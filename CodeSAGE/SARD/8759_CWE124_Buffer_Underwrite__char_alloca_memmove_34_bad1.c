#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE124_Buffer_Underwrite__char_alloca_memmove_34_unionType VAR3;
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR4 - 8;
 VAR3.VAR5 = VAR2;
 {
 char * VAR2 = VAR3.VAR6;
 {
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 memmove(VAR2, VAR7, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
 }
}
#endif
