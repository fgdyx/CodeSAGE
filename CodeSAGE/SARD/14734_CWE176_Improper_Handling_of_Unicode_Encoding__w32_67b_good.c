#ifndef VAR1
void FUN1(CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 char VAR5[10] = "";
 int VAR6;
 VAR6 = FUN2(VAR7, VAR8, VAR3, -1, VAR5, 0, 0, 0);
 FUN2(VAR7, VAR8, VAR3, -1, VAR5, VAR6 , 0, 0);
 }
}
void FUN3(CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 char VAR5[10] = "";
 int VAR6;
 VAR6 = FUN2(VAR7, VAR8, VAR3, -1, VAR5, 0, 0, 0);
 if (VAR6 < 10)
 {
 FUN2(VAR7, VAR8, VAR3, -1, VAR5, VAR6 , 0, 0);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
