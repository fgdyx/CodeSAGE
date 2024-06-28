#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 twoIntsStruct VAR4;
 VAR3 = &VAR4;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2(VAR3);
 const VAR7& VAR8 = FUN3();
 VAR8.FUN4(VAR3);
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2(VAR3);
 const VAR7& VAR8 = FUN6();
 VAR8.FUN4(VAR3);
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
