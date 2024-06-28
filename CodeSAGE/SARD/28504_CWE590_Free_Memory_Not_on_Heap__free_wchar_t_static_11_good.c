#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if (VAR3 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 }
 FUN5(VAR2);
 free(VAR2);
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN7())
 {
 {
 wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if (VAR3 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 }
 FUN5(VAR2);
 free(VAR2);
}
void FUN8()
{
 FUN1();
 FUN6();
}
#endif
