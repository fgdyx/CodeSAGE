#ifndef VAR1
void FUN1(CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType VAR2);
void FUN2()
{
 unsigned int VAR3;
 CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_67_structType VAR2;
 VAR3 = 0;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
