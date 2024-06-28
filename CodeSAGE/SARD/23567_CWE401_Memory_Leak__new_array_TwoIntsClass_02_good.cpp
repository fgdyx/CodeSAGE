#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(1)
 {
 VAR3 = new VAR2[100];
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2(VAR3[0].VAR4);
 FUN2(VAR3[0].VAR5);
 }
 if(0)
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
 if(1)
 {
 VAR3 = new VAR2[100];
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2(VAR3[0].VAR4);
 FUN2(VAR3[0].VAR5);
 }
 if(1)
 {
 delete[] VAR3;
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(0)
 {
 FUN3("");
 }
 else
 {
 TwoIntsClass VAR6[100];
 VAR3 = VAR6;
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2(VAR3[0].VAR4);
 FUN2(VAR3[0].VAR5);
 }
 if(1)
 {
 ;
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(1)
 {
 TwoIntsClass VAR6[100];
 VAR3 = VAR6;
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2(VAR3[0].VAR4);
 FUN2(VAR3[0].VAR5);
 }
 if(1)
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
