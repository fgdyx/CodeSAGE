#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 {
 size_t VAR3 = VAR2;
 size_t VAR2 = VAR3;
 {
 wchar_t * VAR4;
 if (VAR2 > wcslen(VAR5))
 {
 VAR4 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR4, VAR5);
 FUN2(VAR4);
 free(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 {
 char VAR6[VAR7] = "";
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR2 = FUN5(VAR6, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 {
 size_t VAR3 = VAR2;
 size_t VAR2 = VAR3;
 {
 wchar_t * VAR4;
 if (VAR2 > wcslen(VAR5) && VAR2 < 100)
 {
 VAR4 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR4, VAR5);
 FUN2(VAR4);
 free(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
