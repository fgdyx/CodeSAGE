#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 {
 wchar_t * VAR4 = VAR2;
 wchar_t * VAR2 = VAR4;
 ;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t VAR5[] = VAR3"";
 VAR2 = FUN5(VAR5);
 FUN3(VAR2);
 }
 {
 wchar_t * VAR4 = VAR2;
 wchar_t * VAR2 = VAR4;
 free(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
