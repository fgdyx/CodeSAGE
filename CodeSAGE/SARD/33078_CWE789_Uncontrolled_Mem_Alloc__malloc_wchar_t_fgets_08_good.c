#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
 }
 if(FUN5())
 {
 FUN4("");
 }
 else
 {
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6) && VAR2 < 100)
 {
 VAR5 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN6(VAR5);
 free(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN7()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
 }
 if(FUN2())
 {
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6) && VAR2 < 100)
 {
 VAR5 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN6(VAR5);
 free(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN8()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN5())
 {
 FUN4("");
 }
 else
 {
 VAR2 = 20;
 }
 if(FUN2())
 {
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6))
 {
 VAR5 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN6(VAR5);
 free(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN9()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 VAR2 = 20;
 }
 if(FUN2())
 {
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6))
 {
 VAR5 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN6(VAR5);
 free(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
void FUN10()
{
 FUN1();
 FUN7();
 FUN8();
 FUN9();
}
#endif
