#ifndef VAR1
void FUN1(CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
 size_t VAR5 = strlen(VAR3);
 if (100-VAR5 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (fgets(VAR3+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = strlen(VAR3);
 if (VAR5 > 0 && VAR3[VAR5-1] == '')
 {
 VAR3[VAR5-1] = '';
 }
 }
 else
 {
 FUN3("");
 VAR3[VAR5] = '';
 }
 }
 }
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
#endif
