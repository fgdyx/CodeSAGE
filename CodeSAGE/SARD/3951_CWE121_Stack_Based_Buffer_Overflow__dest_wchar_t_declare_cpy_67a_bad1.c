#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cpy_67_structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cpy_67_structType VAR2;
 wchar_t VAR4[50];
 wchar_t VAR5[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR3 = VAR4;
 VAR3[0] = VAR6'';
 VAR2.VAR7 = VAR3;
 FUN1(VAR2);
}
#endif
