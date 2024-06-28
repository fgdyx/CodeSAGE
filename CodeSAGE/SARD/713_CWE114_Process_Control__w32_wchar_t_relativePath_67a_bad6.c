#ifndef VAR1
void FUN1(CWE114_Process_Control__w32_wchar_t_relativePath_67_structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 CWE114_Process_Control__w32_wchar_t_relativePath_67_structType VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 /* FLAW: Specify just the file name for the library, not the full path */
 wcscpy(VAR3, VAR5"");
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
#endif
