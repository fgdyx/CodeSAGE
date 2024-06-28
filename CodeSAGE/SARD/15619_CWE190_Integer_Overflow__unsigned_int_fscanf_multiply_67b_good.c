#ifndef VAR1
void FUN1(CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType VAR2)
{
 unsigned int VAR3 = VAR2.VAR4;
 if(VAR3 > 0)
 {
 unsigned int VAR5 = VAR3 * 2;
 FUN2(VAR5);
 }
}
void FUN3(CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType VAR2)
{
 unsigned int VAR3 = VAR2.VAR4;
 if(VAR3 > 0)
 {
 if (VAR3 < (VAR6/2))
 {
 unsigned int VAR5 = VAR3 * 2;
 FUN2(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
