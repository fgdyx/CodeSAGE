#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_ncpy_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 char VAR5[10+1] = VAR6;
 strncpy(VAR3, VAR5, strlen(VAR5) + 1);
 FUN2(VAR3);
 }
}
#endif
