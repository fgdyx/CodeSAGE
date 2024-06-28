#ifndef VAR1
void FUN1(CWE476_NULL_Pointer_Dereference__struct_67_structType VAR2);
void FUN2()
{
 VAR3 * VAR4;
 CWE476_NULL_Pointer_Dereference__struct_67_structType VAR2;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR4 = NULL;
 VAR2.VAR5 = VAR4;
 FUN1(VAR2);
}
#endif
