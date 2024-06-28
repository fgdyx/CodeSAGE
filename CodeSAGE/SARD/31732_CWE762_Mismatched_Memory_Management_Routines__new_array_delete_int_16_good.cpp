#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new int[100];
 break;
 }
 while(1)
 {
 delete [] VAR2;
 break;
 }
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new int;
 break;
 }
 while(1)
 {
 delete VAR2;
 break;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
