#ifndef VAR1
void FUN1(CWE190_Integer_Overflow__int_fgets_square_67_structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR5 = VAR3 * VAR3;
 FUN2(VAR5);
 }
}
#endif
