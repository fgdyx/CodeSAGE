#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 if(FUN2())
 {
 ;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = VAR3"";
 FUN5(VAR2);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 if(FUN2())
 {
 ;
 }
 if(FUN2())
 {
 VAR2 = VAR3"";
 FUN5(VAR2);
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = VAR3"";
 }
 if(FUN2())
 {
 FUN5(VAR2);
 }
}
static void FUN8()
{
 wchar_t * VAR2;
 if(FUN2())
 {
 VAR2 = VAR3"";
 }
 if(FUN2())
 {
 FUN5(VAR2);
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
