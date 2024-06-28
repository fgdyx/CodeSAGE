#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 }
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 }
 if(VAR3==5)
 {
 free(VAR2);
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
 }
 if(VAR3==5)
 {
 delete VAR2;
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new wchar_t;
 }
 if(VAR3==5)
 {
 delete VAR2;
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
