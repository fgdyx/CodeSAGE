#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 struct VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 struct _twoIntsStruct VAR5;
 VAR3 = &VAR5;
 VAR3->VAR6 = 0;
 VAR3->VAR7 = 0;
 FUN2((VAR8 *)VAR3);
 {
 struct VAR2 * VAR3 = VAR4;
 ;
 }
}
static void FUN3()
{
 struct VAR2 * VAR3;
 struct VAR2 * &VAR4 = VAR3;
 VAR3 = NULL;
 VAR3 = new struct VAR2;
 VAR3->VAR6 = 0;
 VAR3->VAR7 = 0;
 FUN2((VAR8 *)VAR3);
 {
 struct VAR2 * VAR3 = VAR4;
 delete VAR3;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
