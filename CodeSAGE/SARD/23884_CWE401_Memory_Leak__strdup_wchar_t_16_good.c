#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 {
 wchar_t VAR3[] = VAR4"";
 VAR2 = FUN2(VAR3);
 FUN3(VAR2);
 }
 break;
 }
 while(1)
 {
 free(VAR2);
 break;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (wchar_t *)FUN5(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR4"");
 FUN3(VAR2);
 break;
 }
 while(1)
 {
 ;
 break;
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
