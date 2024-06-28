#ifndef VAR1
static void FUN1()
{
 char VAR2;
 CWE190_Integer_Overflow__char_max_square_34_unionType VAR3;
 VAR2 = '';
 VAR2 = 2;
 VAR3.VAR4 = VAR2;
 {
 char VAR2 = VAR3.VAR5;
 {
 char VAR6 = VAR2 * VAR2;
 FUN2(VAR6);
 }
 }
}
static void FUN3()
{
 char VAR2;
 CWE190_Integer_Overflow__char_max_square_34_unionType VAR3;
 VAR2 = '';
 VAR2 = VAR7;
 VAR3.VAR4 = VAR2;
 {
 char VAR2 = VAR3.VAR5;
 if (FUN4((long)VAR2) <= (long)FUN5((double)VAR7))
 {
 char VAR6 = VAR2 * VAR2;
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
