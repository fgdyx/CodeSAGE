#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = new VAR2[100];
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(VAR3[0].VAR5);
 FUN2(VAR3[0].VAR6);
 }
 if(VAR7)
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
 if(VAR4)
 {
 VAR3 = new VAR2[100];
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(VAR3[0].VAR5);
 FUN2(VAR3[0].VAR6);
 }
 if(VAR4)
 {
 delete[] VAR3;
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR7)
 {
 FUN3("");
 }
 else
 {
 TwoIntsClass VAR8[100];
 VAR3 = VAR8;
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(VAR3[0].VAR5);
 FUN2(VAR3[0].VAR6);
 }
 if(VAR4)
 {
 ;
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 TwoIntsClass VAR8[100];
 VAR3 = VAR8;
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(VAR3[0].VAR5);
 FUN2(VAR3[0].VAR6);
 }
 if(VAR4)
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
