#ifndef VAR1
void FUN1(CWE191_Integer_Underflow__char_fscanf_sub_67_structType VAR2)
{
 char VAR3 = VAR2.VAR4;
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 char VAR5 = VAR3 - 1;
 FUN2(VAR5);
 }
}
#endif
