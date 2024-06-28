#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)calloc(20, sizeof(wchar_t));
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 if (VAR2 != NULL)
 {
 wcscpy(VAR2, VAR4"");
 FUN3(VAR2);
 free(VAR2);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)calloc(20, sizeof(wchar_t));
 if(VAR5)
 {
 if (VAR2 != NULL)
 {
 wcscpy(VAR2, VAR4"");
 FUN3(VAR2);
 free(VAR2);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
