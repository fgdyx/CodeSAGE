#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[10+1] = VAR6;
 size_t VAR7, VAR8;
 VAR8 = wcslen(VAR5);
 for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
 {
 VAR3[VAR7] = VAR5[VAR7];
 }
 FUN2(VAR3);
 }
}
#endif
