#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 VAR3 = new VAR2;
 delete VAR3;
 break;
 }
 while(1)
 {
 ;
 break;
 }
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 VAR3 = new VAR2;
 break;
 }
 while(1)
 {
 delete VAR3;
 break;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
