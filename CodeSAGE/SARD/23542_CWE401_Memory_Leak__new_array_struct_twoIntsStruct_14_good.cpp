#ifndef VAR1
static void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 VAR3 = new struct VAR2[100];
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2((VAR7 *)&VAR3[0]);
 }
 if(VAR4!=5)
 {
 FUN3("");
 }
 else
 {
 delete[] VAR3;
 }
}
static void FUN4()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 VAR3 = new struct VAR2[100];
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2((VAR7 *)&VAR3[0]);
 }
 if(VAR4==5)
 {
 delete[] VAR3;
 }
}
static void FUN5()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4!=5)
 {
 FUN3("");
 }
 else
 {
 struct _twoIntsStruct VAR8[100];
 VAR3 = VAR8;
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2((VAR7 *)&VAR3[0]);
 }
 if(VAR4==5)
 {
 ;
 }
}
static void FUN6()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 struct _twoIntsStruct VAR8[100];
 VAR3 = VAR8;
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2((VAR7 *)&VAR3[0]);
 }
 if(VAR4==5)
 {
 ;
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
