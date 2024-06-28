#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 while(1)
 {
 VAR2 = rand();
 break;
 }
 while(1)
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
 break;
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 while(1)
 {
 VAR2 = 20;
 break;
 }
 while(1)
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
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
