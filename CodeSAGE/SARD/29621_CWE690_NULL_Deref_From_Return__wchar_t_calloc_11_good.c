#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)calloc(20, sizeof(wchar_t));
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 if (VAR2 != NULL)
 {
 wcscpy(VAR2, VAR3"");
 FUN4(VAR2);
 free(VAR2);
 }
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)calloc(20, sizeof(wchar_t));
 if(FUN6())
 {
 if (VAR2 != NULL)
 {
 wcscpy(VAR2, VAR3"");
 FUN4(VAR2);
 free(VAR2);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
