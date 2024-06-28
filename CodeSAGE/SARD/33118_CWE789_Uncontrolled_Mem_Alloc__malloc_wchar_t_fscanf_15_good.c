#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 fscanf(stdin, "", &VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN2("");
 break;
 default:
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4) && VAR2 < 100)
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
 break;
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 fscanf(stdin, "", &VAR2);
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4) && VAR2 < 100)
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN5()
{
 size_t VAR2;
 VAR2 = 0;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = 20;
 break;
 }
 switch(7)
 {
 case 7:
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN6()
{
 size_t VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 VAR2 = 20;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 wchar_t * VAR3;
 if (VAR2 > wcslen(VAR4))
 {
 VAR3 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
