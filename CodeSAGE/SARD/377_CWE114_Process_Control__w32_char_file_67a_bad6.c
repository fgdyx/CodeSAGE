#ifndef VAR1
void FUN1(CWE114_Process_Control__w32_char_file_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE114_Process_Control__w32_char_file_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
 size_t VAR5 = strlen(VAR3);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR3+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN3("");
 VAR3[VAR5] = '';
 }
 fclose(VAR7);
 }
 }
 }
 VAR2.VAR9 = VAR3;
 FUN1(VAR2);
}
#endif
