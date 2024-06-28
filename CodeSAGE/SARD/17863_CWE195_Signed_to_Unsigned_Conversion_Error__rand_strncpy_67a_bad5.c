#ifndef VAR1
void FUN1(CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_67_structType VAR2);
void FUN2()
{
 int VAR3;
 CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_67_structType VAR2;
 VAR3 = -1;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR3 = FUN3();
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
