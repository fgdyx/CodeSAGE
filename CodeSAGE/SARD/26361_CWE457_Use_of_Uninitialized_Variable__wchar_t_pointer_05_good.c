#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 if(VAR3)
 {
 ;
 }
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR5"";
 FUN3(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 if(VAR3)
 {
 ;
 }
 if(VAR3)
 {
 VAR2 = VAR5"";
 FUN3(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR5"";
 }
 if(VAR3)
 {
 FUN3(VAR2);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 if(VAR3)
 {
 VAR2 = VAR5"";
 }
 if(VAR3)
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
