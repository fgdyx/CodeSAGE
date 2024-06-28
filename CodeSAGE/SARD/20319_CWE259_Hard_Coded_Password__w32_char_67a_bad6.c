#ifndef VAR1
void FUN1(CWE259_Hard_Coded_Password__w32_char_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE259_Hard_Coded_Password__w32_char_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 /* FLAW: Use a hardcoded password */
 strcpy(VAR3, VAR5);
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
#endif
