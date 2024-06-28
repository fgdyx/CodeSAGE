#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = new VAR2;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2(VAR3);
 goto VAR7;
VAR7:
 delete VAR3;
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 twoIntsStruct VAR8;
 VAR3 = &VAR8;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2(VAR3);
 goto VAR7;
VAR7:
 ;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
