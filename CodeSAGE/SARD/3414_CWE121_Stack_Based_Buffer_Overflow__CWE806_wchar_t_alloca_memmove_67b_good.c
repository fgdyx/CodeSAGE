#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memmove_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[50] = VAR6"";
 memmove(VAR5, VAR3, wcslen(VAR3)*sizeof(wchar_t));
 VAR5[50-1] = VAR6'';
 FUN2(VAR3);
 }
}
#endif
