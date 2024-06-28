#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 break;
 }
 while(1)
 {
 delete[] VAR2;
 break;
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 int VAR3[100];
 VAR2 = VAR3;
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 break;
 }
 while(1)
 {
 ;
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
