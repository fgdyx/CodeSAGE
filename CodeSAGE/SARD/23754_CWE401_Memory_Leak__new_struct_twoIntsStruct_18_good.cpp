#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = new struct VAR2;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2((VAR7 *)VAR3);
 goto VAR8;
VAR8:
 delete VAR3;
}
static void FUN3()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 struct _twoIntsStruct VAR9;
 VAR3 = &VAR9;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2((VAR7 *)VAR3);
 goto VAR8;
VAR8:
 ;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
