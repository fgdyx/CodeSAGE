#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67_structType VAR2);
static void FUN2()
{
 char * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_67_structType VAR2;
 char * VAR4 = (char *)FUN3(100*sizeof(char));
 VAR3 = VAR4;
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
