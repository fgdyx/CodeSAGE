#ifndef VAR1
static void FUN1()
{
 short VAR2;
 CWE190_Integer_Overflow__short_fscanf_square_34_unionType VAR3;
 VAR2 = 0;
 VAR2 = 2;
 VAR3.VAR4 = VAR2;
 {
 short VAR2 = VAR3.VAR5;
 {
 short VAR6 = VAR2 * VAR2;
 FUN2(VAR6);
 }
 }
}
static void FUN3()
{
 short VAR2;
 CWE190_Integer_Overflow__short_fscanf_square_34_unionType VAR3;
 VAR2 = 0;
 fscanf (stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 short VAR2 = VAR3.VAR5;
 if (FUN4((long)VAR2) <= (long)FUN5((double)VAR7))
 {
 short VAR6 = VAR2 * VAR2;
 FUN2(VAR6);
 }
 else
 {
 FUN6("");
 }
 }
}
void FUN7()
{
 FUN1();
 FUN3();
}
#endif
