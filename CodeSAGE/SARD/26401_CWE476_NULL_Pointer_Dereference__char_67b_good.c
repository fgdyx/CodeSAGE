#ifndef VAR1
void FUN1(CWE476_NULL_Pointer_Dereference__char_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 FUN2(VAR3[0]);
}
void FUN3(CWE476_NULL_Pointer_Dereference__char_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 if (VAR3 != NULL)
 {
 FUN2(VAR3[0]);
 }
 else
 {
 FUN4("");
 }
}
#endif
