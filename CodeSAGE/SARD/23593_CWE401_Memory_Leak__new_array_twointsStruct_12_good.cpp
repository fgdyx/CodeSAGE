#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2[100];
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
 }
 else
 {
 VAR3 = new VAR2[100];
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
 }
 if(FUN2())
 {
 delete[] VAR3;
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
 if(FUN2())
 {
 twoIntsStruct VAR6[100];
 VAR3 = VAR6;
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
 }
 else
 {
 twoIntsStruct VAR6[100];
 VAR3 = VAR6;
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
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
