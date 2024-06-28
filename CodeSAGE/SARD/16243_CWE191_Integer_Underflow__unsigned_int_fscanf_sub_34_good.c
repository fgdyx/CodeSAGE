#ifndef VAR1
static void FUN1()
{
 unsigned int VAR2;
 CWE191_Integer_Underflow__unsigned_int_fscanf_sub_34_unionType VAR3;
 VAR2 = 0;
 VAR2 = -2;
 VAR3.VAR4 = VAR2;
 {
 unsigned int VAR2 = VAR3.VAR5;
 {
 unsigned int VAR6 = VAR2 - 1;
 FUN2(VAR6);
 }
 }
}
static void FUN3()
{
 unsigned int VAR2;
 CWE191_Integer_Underflow__unsigned_int_fscanf_sub_34_unionType VAR3;
 VAR2 = 0;
 fscanf (stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 unsigned int VAR2 = VAR3.VAR5;
 if (VAR2 > 0)
 {
 unsigned int VAR6 = VAR2 - 1;
 FUN2(VAR6);
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
