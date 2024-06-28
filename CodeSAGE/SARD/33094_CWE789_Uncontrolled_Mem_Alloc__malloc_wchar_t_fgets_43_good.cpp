#ifndef VAR1
static void FUN1(VAR2 &VAR3)
{
 VAR3 = 20;
}
static void FUN2()
{
 size_t VAR3;
 VAR3 = 0;
 FUN1(VAR3);
 {
 wchar_t * VAR4;
 if (VAR3 > wcslen(VAR5))
 {
 VAR4 = (wchar_t *)malloc(VAR3*sizeof(wchar_t));
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 free(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN5(VAR2 &VAR3)
{
 {
 char VAR6[VAR7] = "";
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR3 = FUN6(VAR6, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN7()
{
 size_t VAR3;
 VAR3 = 0;
 FUN5(VAR3);
 {
 wchar_t * VAR4;
 if (VAR3 > wcslen(VAR5) && VAR3 < 100)
 {
 VAR4 = (wchar_t *)malloc(VAR3*sizeof(wchar_t));
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 free(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
