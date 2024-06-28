#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 while(1)
 {
 ;
 break;
 }
 while(1)
 {
 VAR2 = VAR3"";
 FUN2(VAR2);
 break;
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 while(1)
 {
 VAR2 = VAR3"";
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
