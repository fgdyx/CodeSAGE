#ifndef VAR1
void FUN1(CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_67_structType VAR2);
static void FUN2()
{
 char * VAR3;
 CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 strcpy(VAR3, "");
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_67_structType VAR2);
static void FUN4()
{
 char * VAR3;
 CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
 size_t VAR6 = strlen(VAR3);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 if (fgets(VAR3+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN5("");
 VAR3[VAR6] = '';
 }
 fclose(VAR8);
 }
 }
 }
 VAR2.VAR5 = VAR3;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
