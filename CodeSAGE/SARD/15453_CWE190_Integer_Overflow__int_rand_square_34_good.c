#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE190_Integer_Overflow__int_rand_square_34_unionType VAR3;
 VAR2 = 0;
 VAR2 = 2;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6 = VAR2 * VAR2;
 FUN2(VAR6);
 }
 }
}
static void FUN3()
{
 int VAR2;
 CWE190_Integer_Overflow__int_rand_square_34_unionType VAR3;
 VAR2 = 0;
 VAR2 = FUN4();
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 if (FUN5((long)VAR2) <= (long)FUN6((double)VAR7))
 {
 int VAR6 = VAR2 * VAR2;
 FUN2(VAR6);
 }
 else
 {
 FUN7("");
 }
 }
}
void FUN8()
{
 FUN1();
 FUN3();
}
#endif
