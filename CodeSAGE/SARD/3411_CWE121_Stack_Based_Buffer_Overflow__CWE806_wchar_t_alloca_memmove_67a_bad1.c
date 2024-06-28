#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memmove_67_structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memmove_67_structType VAR2;
 wchar_t * VAR4 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR3 = VAR4;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR3, VAR5'', 100-1);
 VAR3[100-1] = VAR5'';
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
#endif
