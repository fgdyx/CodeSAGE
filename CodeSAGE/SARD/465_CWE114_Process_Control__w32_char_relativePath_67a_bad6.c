#ifndef VAR1
void FUN1(CWE114_Process_Control__w32_char_relativePath_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE114_Process_Control__w32_char_relativePath_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 /* FLAW: Specify just the file name for the library, not the full path */
 strcpy(VAR3, "");
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
#endif
