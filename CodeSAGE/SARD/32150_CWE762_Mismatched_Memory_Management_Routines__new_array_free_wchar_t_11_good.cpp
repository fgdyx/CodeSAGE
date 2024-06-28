#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new wchar_t[100];
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 delete [] VAR2;
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new wchar_t[100];
 }
 if(FUN2())
 {
 delete [] VAR2;
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 }
 if(FUN2())
 {
 free(VAR2);
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 }
 if(FUN2())
 {
 free(VAR2);
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
