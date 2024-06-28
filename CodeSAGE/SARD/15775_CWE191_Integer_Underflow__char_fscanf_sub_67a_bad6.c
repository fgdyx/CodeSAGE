#ifndef VAR1
void FUN1(CWE191_Integer_Underflow__char_fscanf_sub_67_structType VAR2);
void FUN2()
{
 char VAR3;
 CWE191_Integer_Underflow__char_fscanf_sub_67_structType VAR2;
 VAR3 = '';
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
