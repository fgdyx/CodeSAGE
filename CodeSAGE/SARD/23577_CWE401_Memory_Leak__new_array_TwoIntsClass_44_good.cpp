#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 ;
}
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 TwoIntsClass VAR6[100];
 VAR3 = VAR6;
 VAR3[0].VAR7 = 0;
 VAR3[0].VAR8 = 0;
 FUN3(VAR3[0].VAR7);
 FUN3(VAR3[0].VAR8);
 FUN4(VAR3);
}
static void FUN5(VAR2 * VAR3)
{
 delete[] VAR3;
}
static void FUN6()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR9;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 VAR3[0].VAR7 = 0;
 VAR3[0].VAR8 = 0;
 FUN3(VAR3[0].VAR7);
 FUN3(VAR3[0].VAR8);
 FUN4(VAR3);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
