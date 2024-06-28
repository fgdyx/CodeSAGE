#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 }
 {
 wchar_t VAR4[50] = VAR3"";
 wcscpy(VAR4, VAR2);
 FUN4(VAR2);
 free(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if(FUN6())
 {
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 }
 {
 wchar_t VAR4[50] = VAR3"";
 wcscpy(VAR4, VAR2);
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
