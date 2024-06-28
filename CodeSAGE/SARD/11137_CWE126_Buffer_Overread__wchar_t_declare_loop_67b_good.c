#ifndef VAR1
void FUN1(CWE126_Buffer_Overread__wchar_t_declare_loop_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 size_t VAR5, VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR8'', 100-1);
 VAR7[100-1] = VAR8'';
 VAR6 = wcslen(VAR7);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR7[VAR5] = VAR3[VAR5];
 }
 VAR7[100-1] = VAR8'';
 FUN2(VAR7);
 }
}
#endif
