#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 break;
 }
 while(1)
 {
 free(VAR2);
 break;
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 break;
 }
 while(1)
 {
 ;
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
