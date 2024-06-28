#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 if(5==5)
 {
 VAR2 = NULL;
 }
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 if (VAR2 != NULL)
 {
 FUN3(VAR2[0]);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 if(5==5)
 {
 VAR2 = NULL;
 }
 if(5==5)
 {
 if (VAR2 != NULL)
 {
 FUN3(VAR2[0]);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR3"";
 }
 if(5==5)
 {
 FUN3(VAR2[0]);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 if(5==5)
 {
 VAR2 = VAR3"";
 }
 if(5==5)
 {
 FUN3(VAR2[0]);
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
