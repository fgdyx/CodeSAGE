#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = new VAR2;
 VAR3->VAR5 = 1;
 VAR3->VAR6 = 2;
 delete VAR3;
 }
 if(VAR7)
 {
 FUN2("");
 }
 else
 {
 ;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = new VAR2;
 VAR3->VAR5 = 1;
 VAR3->VAR6 = 2;
 delete VAR3;
 }
 if(VAR4)
 {
 ;
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR7)
 {
 FUN2("");
 }
 else
 {
 VAR3 = new VAR2;
 VAR3->VAR5 = 1;
 VAR3->VAR6 = 2;
 }
 if(VAR4)
 {
 FUN5(VAR3);
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = new VAR2;
 VAR3->VAR5 = 1;
 VAR3->VAR6 = 2;
 }
 if(VAR4)
 {
 FUN5(VAR3);
 }
}
void FUN7()
{
 FUN1();
 FUN3();
 FUN4();
 FUN6();
}
#endif
