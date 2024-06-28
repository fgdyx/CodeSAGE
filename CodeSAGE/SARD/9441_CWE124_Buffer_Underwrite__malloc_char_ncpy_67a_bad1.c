#ifndef VAR1
void FUN1(CWE124_Buffer_Underwrite__malloc_char_ncpy_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE124_Buffer_Underwrite__malloc_char_ncpy_67_structType VAR2;
 VAR3 = NULL;
 {
 char * VAR4 = (char *)malloc(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR3 = VAR4 - 8;
 }
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
#endif
