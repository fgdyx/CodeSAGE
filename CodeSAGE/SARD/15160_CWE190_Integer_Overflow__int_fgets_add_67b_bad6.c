#ifndef VAR1
void FUN1(CWE190_Integer_Overflow__int_fgets_add_67_structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int VAR5 = VAR3 + 1;
 FUN2(VAR5);
 }
}
#endif
