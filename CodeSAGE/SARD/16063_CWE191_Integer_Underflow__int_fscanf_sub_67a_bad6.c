#ifndef VAR1
void FUN1(CWE191_Integer_Underflow__int_fscanf_sub_67_structType VAR2);
void FUN2()
{
 int VAR3;
 CWE191_Integer_Underflow__int_fscanf_sub_67_structType VAR2;
 VAR3 = 0;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
