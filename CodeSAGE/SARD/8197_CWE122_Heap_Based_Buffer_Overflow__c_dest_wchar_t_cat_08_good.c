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
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 }
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 wcscat(VAR2, VAR4);
 FUN4(VAR2);
 free(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN6())
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 }
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 wcscat(VAR2, VAR4);
 FUN4(VAR2);
 free(VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
