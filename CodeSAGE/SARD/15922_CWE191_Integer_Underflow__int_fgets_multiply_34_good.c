#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE191_Integer_Underflow__int_fgets_multiply_34_unionType VAR3;
 VAR2 = 0;
 VAR2 = -2;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 if(VAR2 < 0)
 {
 int VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
 }
}
static void FUN3()
{
 int VAR2;
 CWE191_Integer_Underflow__int_fgets_multiply_34_unionType VAR3;
 VAR2 = 0;
 {
 char VAR7[VAR8] = "";
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR2 = FUN4(VAR7);
 }
 else
 {
 FUN5("");
 }
 }
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR9/2))
 {
 int VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
 else
 {
 FUN5("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
