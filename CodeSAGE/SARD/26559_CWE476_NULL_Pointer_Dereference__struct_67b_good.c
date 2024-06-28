#ifndef VAR1
void FUN1(CWE476_NULL_Pointer_Dereference__struct_67_structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 FUN2(VAR4->VAR6);
}
void FUN3(CWE476_NULL_Pointer_Dereference__struct_67_structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 if (VAR4 != NULL)
 {
 FUN2(VAR4->VAR6);
 }
 else
 {
 FUN4("");
 }
}
#endif
