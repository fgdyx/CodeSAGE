#ifndef VAR1
void FUN1(CWE476_NULL_Pointer_Dereference__struct_67_structType VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 CWE476_NULL_Pointer_Dereference__struct_67_structType VAR2;
 {
 twoIntsStruct VAR5;
 VAR5.VAR6 = 0;
 VAR5.VAR7 = 0;
 VAR4 = &VAR5;
 }
 VAR2.VAR8 = VAR4;
 FUN1(VAR2);
}
void FUN3(CWE476_NULL_Pointer_Dereference__struct_67_structType VAR2);
static void FUN4()
{
 VAR3 * VAR4;
 CWE476_NULL_Pointer_Dereference__struct_67_structType VAR2;
 VAR4 = NULL;
 VAR2.VAR8 = VAR4;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
