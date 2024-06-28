#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 TwoIntsClass VAR4;
 VAR3 = &VAR4;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2(VAR3->VAR5);
 FUN2(VAR3->VAR6);
 ;
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2(VAR3->VAR5);
 FUN2(VAR3->VAR6);
 delete VAR3;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
