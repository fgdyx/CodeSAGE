#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new long;
 *VAR2 = 5L;
 delete VAR2;
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
 long * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new long;
 *VAR2 = 5L;
 break;
 }
 while(1)
 {
 FUN3(*VAR2);
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN2();
}
#endif
