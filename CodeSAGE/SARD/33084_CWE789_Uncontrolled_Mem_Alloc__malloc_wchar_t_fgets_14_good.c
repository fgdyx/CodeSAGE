#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 {
 wchar_t * VAR6;
 if (VAR2 > wcslen(VAR7) && VAR2 < 100)
 {
 VAR6 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN4(VAR6);
 free(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN5()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(VAR3==5)
 {
 {
 wchar_t * VAR6;
 if (VAR2 > wcslen(VAR7) && VAR2 < 100)
 {
 VAR6 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN4(VAR6);
 free(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN6()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 {
 wchar_t * VAR6;
 if (VAR2 > wcslen(VAR7))
 {
 VAR6 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN4(VAR6);
 free(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN7()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 {
 wchar_t * VAR6;
 if (VAR2 > wcslen(VAR7))
 {
 VAR6 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN4(VAR6);
 free(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
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
