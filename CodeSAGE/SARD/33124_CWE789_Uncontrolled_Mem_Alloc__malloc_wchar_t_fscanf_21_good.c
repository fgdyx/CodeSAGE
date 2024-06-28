#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(size_t VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t * VAR6;
 if (VAR5 > wcslen(VAR7) && VAR5 < 100)
 {
 VAR6 = (wchar_t *)malloc(VAR5*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN3(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN4()
{
 size_t VAR5;
 VAR5 = 0;
 fscanf(stdin, "", &VAR5);
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN5(size_t VAR5)
{
 if(VAR3)
 {
 {
 wchar_t * VAR6;
 if (VAR5 > wcslen(VAR7) && VAR5 < 100)
 {
 VAR6 = (wchar_t *)malloc(VAR5*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN3(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN6()
{
 size_t VAR5;
 VAR5 = 0;
 fscanf(stdin, "", &VAR5);
 VAR3 = 1;
 FUN5(VAR5);
}
static void FUN7(size_t VAR5)
{
 if(VAR4)
 {
 {
 wchar_t * VAR6;
 if (VAR5 > wcslen(VAR7))
 {
 VAR6 = (wchar_t *)malloc(VAR5*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN3(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN8()
{
 size_t VAR5;
 VAR5 = 0;
 VAR5 = 20;
 VAR4 = 1;
 FUN7(VAR5);
}
void FUN9()
{
 FUN4();
 FUN6();
 FUN8();
}
#endif
