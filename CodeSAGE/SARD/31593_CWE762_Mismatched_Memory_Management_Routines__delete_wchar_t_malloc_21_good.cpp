#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(wchar_t * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 free(VAR5);
 }
}
static void FUN3()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN4(wchar_t * VAR5)
{
 if(VAR3)
 {
 free(VAR5);
 }
}
static void FUN5()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR3 = 1;
 FUN4(VAR5);
}
static void FUN6(wchar_t * VAR5)
{
 if(VAR4)
 {
 delete VAR5;
 }
}
static void FUN7()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = new wchar_t;
 VAR4 = 1;
 FUN6(VAR5);
}
void FUN8()
{
 FUN3();
 FUN5();
 FUN7();
}
#endif
