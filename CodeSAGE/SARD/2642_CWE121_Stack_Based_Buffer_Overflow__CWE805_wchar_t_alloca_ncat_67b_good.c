#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_ncat_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 wcsncat(VAR3, VAR5, 100);
 FUN2(VAR3);
 }
}
#endif
