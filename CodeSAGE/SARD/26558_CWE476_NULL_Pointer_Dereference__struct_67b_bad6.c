#ifndef VAR1
void FUN1(CWE476_NULL_Pointer_Dereference__struct_67_structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR4->VAR6);
}
#endif
