#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 {
 wchar_t VAR4[] = VAR5"";
 VAR2 = FUN2(VAR4);
 FUN3(VAR2);
 }
 }
 if(VAR3!=5)
 {
 FUN4("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 {
 wchar_t VAR4[] = VAR5"";
 VAR2 = FUN2(VAR4);
 FUN3(VAR2);
 }
 }
 if(VAR3==5)
 {
 free(VAR2);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN4("");
 }
 else
 {
 VAR2 = (wchar_t *)FUN7(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR5"");
 FUN3(VAR2);
 }
 if(VAR3==5)
 {
 ;
 }
}
static void FUN8()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (wchar_t *)FUN7(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR5"");
 FUN3(VAR2);
 }
 if(VAR3==5)
 {
 ;
 }
}
void FUN9()
{
 FUN1();
 FUN5();
 FUN6();
 FUN8();
}
#endif
