#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2;
 }
 else
 {
 VAR3 = new VAR2;
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
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2[100];
 }
 else
 {
 VAR3 = new VAR2[100];
 }
 if(FUN2())
 {
 delete [] VAR3;
 }
 else
 {
 delete [] VAR3;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
