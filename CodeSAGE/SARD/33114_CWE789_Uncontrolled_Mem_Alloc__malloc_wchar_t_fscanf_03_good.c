#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(5==5)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4) && VAR2 < 100)
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
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
 size_t VAR2;
 VAR2 = 0;
 if(5==5)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(5==5)
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4) && VAR2 < 100)
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN5()
{
 size_t VAR2;
 VAR2 = 0;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 20;
 }
 if(5==5)
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
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
 size_t VAR2;
 VAR2 = 0;
 if(5==5)
 {
 VAR2 = 20;
 }
 if(5==5)
 {
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
