#ifndef VAR1
void FUN1(CWE124_Buffer_Underwrite__malloc_char_ncpy_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 strncpy(VAR3, VAR5, 100-1);
 VAR3[100-1] = '';
 FUN2(VAR3);
 }
}
#endif
