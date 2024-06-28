#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new struct VAR2;
 VAR3->VAR4 = 0;
 VAR3->VAR5 = 0;
 FUN3((VAR6 *)VAR3);
 }
 else
 {
 VAR3 = new struct VAR2;
 VAR3->VAR4 = 0;
 VAR3->VAR5 = 0;
 FUN3((VAR6 *)VAR3);
 }
 if(FUN2())
 {
 delete VAR3;
 }
 else
 {
 delete VAR3;
 }
}
static void FUN4()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 struct _twoIntsStruct VAR7;
 VAR3 = &VAR7;
 VAR3->VAR4 = 0;
 VAR3->VAR5 = 0;
 FUN3((VAR6 *)VAR3);
 }
 else
 {
 struct _twoIntsStruct VAR7;
 VAR3 = &VAR7;
 VAR3->VAR4 = 0;
 VAR3->VAR5 = 0;
 FUN3((VAR6 *)VAR3);
 }
 if(FUN2())
 {
 ;
 }
 else
 {
 ;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
