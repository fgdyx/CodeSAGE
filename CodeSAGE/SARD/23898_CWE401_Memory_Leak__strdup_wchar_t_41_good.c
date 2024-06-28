#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 ;
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN4(VAR2);
 FUN1(VAR2);
}
static void FUN5(wchar_t * VAR2)
{
 free(VAR2);
}
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t VAR4[] = VAR3"";
 VAR2 = FUN7(VAR4);
 FUN4(VAR2);
 }
 FUN5(VAR2);
}
void FUN8()
{
 FUN6();
 FUN2();
}
#endif
