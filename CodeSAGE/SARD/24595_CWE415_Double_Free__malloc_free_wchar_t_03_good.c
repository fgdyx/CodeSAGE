#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 free(VAR2);
 }
 if(5!=5)
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
 if(5==5)
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 free(VAR2);
 }
 if(5==5)
 {
 ;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 }
 if(5==5)
 {
 free(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 }
 if(5==5)
 {
 free(VAR2);
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
