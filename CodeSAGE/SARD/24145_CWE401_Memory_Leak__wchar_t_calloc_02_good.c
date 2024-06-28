#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 }
 if(0)
 {
 FUN3("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 }
 if(1)
 {
 free(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN3("");
 }
 else
 {
 VAR2 = (wchar_t *)FUN6(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 }
 if(1)
 {
 ;
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = (wchar_t *)FUN6(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 }
 if(1)
 {
 ;
 }
}
void FUN8()
{
 FUN1();
 FUN4();
 FUN5();
 FUN7();
}
#endif
