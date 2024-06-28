#ifndef VAR1
void FUN1(CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType VAR2;
 wchar_t VAR4[100];
 VAR3 = VAR4;
 wcscpy(VAR3, VAR5"");
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType VAR2);
static void FUN4()
{
 wchar_t * VAR3;
 CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType VAR2;
 wchar_t VAR4[100];
 VAR3 = VAR4;
 wcscpy(VAR3, VAR5"");
 VAR2.VAR6 = VAR3;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
