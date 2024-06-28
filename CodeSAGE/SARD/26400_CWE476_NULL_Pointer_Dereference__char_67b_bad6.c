#ifndef VAR1
void FUN1(CWE476_NULL_Pointer_Dereference__char_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR3[0]);
}
#endif
