#ifndef VAR1
void FUN1(CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_67_structType VAR2);
void FUN2()
{
 int VAR3;
 CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_fixed_67_structType VAR2;
 VAR3 = -1;
 /* FLAW: Set data to a value that will cause an integer overflow in the call to malloc() in the sink */
 VAR3 = VAR4 / 2 + 2;
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
#endif
