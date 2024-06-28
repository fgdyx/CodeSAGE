#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 while(1)
 {
 ;
 break;
 }
 while(1)
 {
 VAR2 = "";
 FUN2(VAR2);
 break;
 }
}
static void FUN3()
{
 char * VAR2;
 while(1)
 {
 VAR2 = "";
 break;
 }
 while(1)
 {
 FUN2(VAR2);
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
