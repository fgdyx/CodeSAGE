#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_cpy_67_structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_cpy_67_structType VAR2;
 wchar_t VAR4[10];
 wchar_t VAR5[10+1];
 VAR3 = VAR5;
 VAR3[0] = VAR6'';
 VAR2.VAR7 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
