#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 }
 else
 {
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 free(VAR2);
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
 if(FUN2())
 {
 VAR2 = (wchar_t *)FUN5(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 }
 else
 {
 VAR2 = (wchar_t *)FUN5(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 ;
 }
 else
 {
 ;
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
