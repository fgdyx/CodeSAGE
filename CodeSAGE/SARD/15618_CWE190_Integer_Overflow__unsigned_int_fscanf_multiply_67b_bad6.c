#ifndef VAR1
void FUN1(CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType VAR2)
{
 unsigned int VAR3 = VAR2.VAR4;
 if(VAR3 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
 unsigned int VAR5 = VAR3 * 2;
 FUN2(VAR5);
 }
}
#endif
