#ifndef VAR1
static void FUN1()
{
 char VAR2;
 CWE191_Integer_Underflow__char_fscanf_multiply_34_unionType VAR3;
 VAR2 = '';
 VAR2 = -2;
 VAR3.VAR4 = VAR2;
 {
 char VAR2 = VAR3.VAR5;
 if(VAR2 < 0)
 {
 char VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
 }
}
static void FUN3()
{
 char VAR2;
 CWE191_Integer_Underflow__char_fscanf_multiply_34_unionType VAR3;
 VAR2 = '';
 fscanf (stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 char VAR2 = VAR3.VAR5;
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR7/2))
 {
 char VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
