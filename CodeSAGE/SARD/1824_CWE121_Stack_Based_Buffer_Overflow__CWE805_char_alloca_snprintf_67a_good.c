#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_snprintf_67_structType VAR2);
static void FUN2()
{
 char * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_snprintf_67_structType VAR2;
 char * VAR4 = (char *)FUN3(50*sizeof(char));
 char * VAR5 = (char *)FUN3(100*sizeof(char));
 VAR3 = VAR5;
 VAR3[0] = '';
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
