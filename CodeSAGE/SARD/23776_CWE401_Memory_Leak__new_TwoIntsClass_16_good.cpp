#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 VAR3 = new VAR2;
 VAR3->VAR4 = 0;
 VAR3->VAR5 = 0;
 FUN2(VAR3->VAR4);
 FUN2(VAR3->VAR5);
 break;
 }
 while(1)
 {
 delete VAR3;
 break;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 TwoIntsClass VAR6;
 VAR3 = &VAR6;
 VAR3->VAR4 = 0;
 VAR3->VAR5 = 0;
 FUN2(VAR3->VAR4);
 FUN2(VAR3->VAR5);
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
