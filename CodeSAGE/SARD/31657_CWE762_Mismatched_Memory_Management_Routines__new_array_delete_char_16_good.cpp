#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new char[100];
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
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new char;
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
