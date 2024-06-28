#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new wchar_t[100];
 delete [] VAR2;
 }
 if(VAR4)
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
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new wchar_t[100];
 delete [] VAR2;
 }
 if(VAR3)
 {
 ;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new wchar_t[100];
 }
 if(VAR3)
 {
 delete [] VAR2;
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new wchar_t[100];
 }
 if(VAR3)
 {
 delete [] VAR2;
 }
}
void FUN6()
{
 FUN1();
 FUN3();
 FUN4();
 FUN5();
}
#endif
