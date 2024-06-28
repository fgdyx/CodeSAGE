#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_memcpy_67_structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_memcpy_67_structType VAR2;
 wchar_t * VAR4 = (wchar_t *)FUN3(50*sizeof(wchar_t));
 wchar_t * VAR5 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR3 = VAR5;
 VAR3[0] = VAR6'';
 VAR2.VAR7 = VAR3;
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
