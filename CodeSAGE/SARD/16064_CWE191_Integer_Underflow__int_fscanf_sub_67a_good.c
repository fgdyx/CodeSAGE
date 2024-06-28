#ifndef VAR1
void FUN1(CWE191_Integer_Underflow__int_fscanf_sub_67_structType VAR2);
static void FUN2()
{
 int VAR3;
 CWE191_Integer_Underflow__int_fscanf_sub_67_structType VAR2;
 VAR3 = 0;
 VAR3 = -2;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE191_Integer_Underflow__int_fscanf_sub_67_structType VAR2);
static void FUN4()
{
 int VAR3;
 CWE191_Integer_Underflow__int_fscanf_sub_67_structType VAR2;
 VAR3 = 0;
 fscanf(stdin, "", &VAR3);
 VAR2.VAR4 = VAR3;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
