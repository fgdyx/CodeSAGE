#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new wchar_t;
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
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new wchar_t;
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
