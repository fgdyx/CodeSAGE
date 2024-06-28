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
 VAR5 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR5, VAR6"");
 FUN4(VAR5);
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN5(wchar_t * VAR5)
{
 if(VAR3)
 {
 free(VAR5);
 }
}
static void FUN6()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR5, VAR6"");
 FUN4(VAR5);
 VAR3 = 1;
 FUN5(VAR5);
}
static void FUN7(wchar_t * VAR5)
{
 if(VAR4)
 {
 ;
 }
}
static void FUN8()
{
 wchar_t * VAR5;
 VAR5 = NULL;
 VAR5 = (wchar_t *)FUN9(100*sizeof(wchar_t));
 wcscpy(VAR5, VAR6"");
 FUN4(VAR5);
 VAR4 = 1;
 FUN7(VAR5);
}
void FUN10()
{
 FUN3();
 FUN6();
 FUN8();
}
#endif
