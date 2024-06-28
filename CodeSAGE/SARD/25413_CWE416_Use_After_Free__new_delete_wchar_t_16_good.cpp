#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new wchar_t;
 *VAR2 = VAR3'';
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
 *VAR2 = VAR3'';
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
