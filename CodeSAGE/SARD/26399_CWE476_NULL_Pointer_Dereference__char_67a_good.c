#ifndef VAR1
void FUN1(CWE476_NULL_Pointer_Dereference__char_67_structType VAR2);
static void FUN2()
{
 char * VAR3;
 CWE476_NULL_Pointer_Dereference__char_67_structType VAR2;
 VAR3 = "";
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE476_NULL_Pointer_Dereference__char_67_structType VAR2);
static void FUN4()
{
 char * VAR3;
 CWE476_NULL_Pointer_Dereference__char_67_structType VAR2;
 VAR3 = NULL;
 VAR2.VAR4 = VAR3;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
