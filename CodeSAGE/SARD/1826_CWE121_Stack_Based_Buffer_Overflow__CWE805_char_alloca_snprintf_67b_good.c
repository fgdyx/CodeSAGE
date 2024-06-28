#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_snprintf_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 FUN2(VAR3, 100, "", VAR5);
 FUN3(VAR3);
 }
}
#endif
