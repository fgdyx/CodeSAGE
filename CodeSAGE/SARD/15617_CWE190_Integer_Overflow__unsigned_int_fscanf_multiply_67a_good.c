#ifndef VAR1
void FUN1(CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType VAR2);
static void FUN2()
{
 unsigned int VAR3;
 CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType VAR2;
 VAR3 = 0;
 VAR3 = 2;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType VAR2);
static void FUN4()
{
 unsigned int VAR3;
 CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType VAR2;
 VAR3 = 0;
 fscanf (stdin, "", &VAR3);
 VAR2.VAR4 = VAR3;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
