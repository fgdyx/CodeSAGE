#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memcpy_67_structType VAR2);
static void FUN2()
{
 char * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memcpy_67_structType VAR2;
 char VAR4[50];
 char VAR5[100];
 VAR3 = VAR5;
 VAR3[0] = '';
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
