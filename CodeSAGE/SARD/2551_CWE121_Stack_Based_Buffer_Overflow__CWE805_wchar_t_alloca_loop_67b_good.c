#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_loop_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 size_t VAR5;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR7'', 100-1);
 VAR6[100-1] = VAR7'';
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR6[VAR5];
 }
 VAR3[100-1] = VAR7'';
 FUN2(VAR3);
 }
}
#endif
