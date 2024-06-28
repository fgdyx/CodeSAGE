#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 VAR3 = new VAR2[100];
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(&VAR3[0]);
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
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 VAR3 = new VAR2[100];
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(&VAR3[0]);
 }
 if(VAR4==5)
 {
 delete[] VAR3;
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4!=5)
 {
 FUN3("");
 }
 else
 {
 twoIntsStruct VAR7[100];
 VAR3 = VAR7;
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(&VAR3[0]);
 }
 if(VAR4==5)
 {
 ;
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 twoIntsStruct VAR7[100];
 VAR3 = VAR7;
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(&VAR3[0]);
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
