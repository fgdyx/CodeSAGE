#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new wchar_t;
 *VAR2 = VAR4'';
 delete VAR2;
 }
 if(VAR3!=5)
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
 if(VAR3==5)
 {
 VAR2 = new wchar_t;
 *VAR2 = VAR4'';
 delete VAR2;
 }
 if(VAR3==5)
 {
 ;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new wchar_t;
 *VAR2 = VAR4'';
 }
 if(VAR3==5)
 {
 FUN5(*VAR2);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new wchar_t;
 *VAR2 = VAR4'';
 }
 if(VAR3==5)
 {
 FUN5(*VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN3();
 FUN4();
 FUN6();
}
#endif
