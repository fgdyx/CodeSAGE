#ifndef VAR1
static void FUN1()
{
 short VAR2;
 CWE190_Integer_Overflow__short_fscanf_multiply_34_unionType VAR3;
 VAR2 = 0;
 VAR2 = 2;
 VAR3.VAR4 = VAR2;
 {
 short VAR2 = VAR3.VAR5;
 if(VAR2 > 0)
 {
 short VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
 }
}
static void FUN3()
{
 short VAR2;
 CWE190_Integer_Overflow__short_fscanf_multiply_34_unionType VAR3;
 VAR2 = 0;
 fscanf (stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 short VAR2 = VAR3.VAR5;
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR7/2))
 {
 short VAR6 = VAR2 * 2;
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
