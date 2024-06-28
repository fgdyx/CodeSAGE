#ifndef VAR1
static void FUN1(size_t VAR2)
{
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 FUN1(VAR2);
}
static void FUN5(size_t VAR2)
{
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4) && VAR2 < 100)
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN6()
{
 size_t VAR2;
 VAR2 = 0;
 fscanf(stdin, "", &VAR2);
 FUN5(VAR2);
}
void FUN7()
{
 FUN6();
 FUN4();
}
#endif
