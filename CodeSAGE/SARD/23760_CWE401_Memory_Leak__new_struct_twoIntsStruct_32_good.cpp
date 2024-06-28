#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 struct VAR2 * *VAR4 = &VAR3;
 struct VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 struct VAR2 * VAR3 = *VAR4;
 struct _twoIntsStruct VAR6;
 VAR3 = &VAR6;
 VAR3->VAR7 = 0;
 VAR3->VAR8 = 0;
 FUN2((VAR9 *)VAR3);
 *VAR4 = VAR3;
 }
 {
 struct VAR2 * VAR3 = *VAR5;
 ;
 }
}
static void FUN3()
{
 struct VAR2 * VAR3;
 struct VAR2 * *VAR4 = &VAR3;
 struct VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 struct VAR2 * VAR3 = *VAR4;
 VAR3 = new struct VAR2;
 VAR3->VAR7 = 0;
 VAR3->VAR8 = 0;
 FUN2((VAR9 *)VAR3);
 *VAR4 = VAR3;
 }
 {
 struct VAR2 * VAR3 = *VAR5;
 delete VAR3;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
