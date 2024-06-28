#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 }
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 delete[] VAR2;
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 }
 if(VAR3==5)
 {
 delete[] VAR2;
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 int VAR4[100];
 VAR2 = VAR4;
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 }
 if(VAR3==5)
 {
 ;
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 int VAR4[100];
 VAR2 = VAR4;
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 }
 if(VAR3==5)
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
