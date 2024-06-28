#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 break;
 default:
 FUN3("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN3("");
 break;
 default:
 free(VAR2);
 break;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 free(VAR2);
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 VAR2 = (wchar_t *)FUN6(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 break;
 }
 switch(7)
 {
 case 7:
 ;
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = (wchar_t *)FUN6(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 ;
 break;
 default:
 FUN3("");
 break;
 }
}
void FUN8()
{
 FUN1();
 FUN4();
 FUN5();
 FUN7();
}
#endif
