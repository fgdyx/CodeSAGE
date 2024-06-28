#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_ncat_67_structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_ncat_67_structType VAR2;
 wchar_t * VAR4 = (wchar_t *)FUN3(50*sizeof(wchar_t));
 wchar_t * VAR5 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 VAR3[0] = VAR6'';
 VAR2.VAR7 = VAR3;
 FUN1(VAR2);
}
#endif
