#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 if(1)
 {
 ;
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR3"";
 FUN3(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 if(1)
 {
 ;
 }
 if(1)
 {
 VAR2 = VAR3"";
 FUN3(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR3"";
 }
 if(1)
 {
 FUN3(VAR2);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 if(1)
 {
 VAR2 = VAR3"";
 }
 if(1)
 {
 FUN3(VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
