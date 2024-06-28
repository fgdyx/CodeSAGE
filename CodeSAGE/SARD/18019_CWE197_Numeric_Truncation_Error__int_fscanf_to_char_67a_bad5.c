#ifndef VAR1
void FUN1(CWE197_Numeric_Truncation_Error__int_fscanf_to_char_67_structType VAR2);
void FUN2()
{
 int VAR3;
 CWE197_Numeric_Truncation_Error__int_fscanf_to_char_67_structType VAR2;
 VAR3 = -1;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
