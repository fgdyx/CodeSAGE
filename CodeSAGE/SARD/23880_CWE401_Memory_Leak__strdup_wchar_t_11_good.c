#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 wchar_t VAR3[] = VAR4"";
 VAR2 = FUN3(VAR3);
 FUN4(VAR2);
 }
 }
 if(FUN5())
 {
 FUN6("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 wchar_t VAR3[] = VAR4"";
 VAR2 = FUN3(VAR3);
 FUN4(VAR2);
 }
 }
 if(FUN2())
 {
 free(VAR2);
 }
}
static void FUN8()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN5())
 {
 FUN6("");
 }
 else
 {
 VAR2 = (wchar_t *)FUN9(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR4"");
 FUN4(VAR2);
 }
 if(FUN2())
 {
 ;
 }
}
static void FUN10()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (wchar_t *)FUN9(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR4"");
 FUN4(VAR2);
 }
 if(FUN2())
 {
 ;
 }
}
void FUN11()
{
 FUN1();
 FUN7();
 FUN8();
 FUN10();
}
#endif
