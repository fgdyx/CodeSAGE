#ifndef VAR1
void FUN1(CWE476_NULL_Pointer_Dereference__char_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE476_NULL_Pointer_Dereference__char_67_structType VAR2;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
