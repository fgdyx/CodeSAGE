#ifndef VAR1
void FUN1(CWE259_Hard_Coded_Password__w32_char_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 HANDLE VAR5;
 char * VAR6 = "";
 char * VAR7 = "";
 /* POTENTIAL FLAW: Attempt to login user with password from the source (which may be hardcoded) */
 if (FUN2(
 VAR6,
 VAR7,
 VAR3,
 VAR8,
 VAR9,
 &VAR5) != 0)
 {
 FUN3("");
 FUN4(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
