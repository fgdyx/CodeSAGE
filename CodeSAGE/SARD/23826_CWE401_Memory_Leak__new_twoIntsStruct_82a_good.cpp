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
 VAR7* VAR8 = new VAR9;
 VAR8->FUN3(VAR3);
 delete VAR8;
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2(VAR3);
 VAR7* VAR8 = new VAR10;
 VAR8->FUN3(VAR3);
 delete VAR8;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
