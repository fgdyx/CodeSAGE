#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = new wchar_t[100];
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
 delete[] VAR2;
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
 VAR2 = new wchar_t[100];
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
 delete[] VAR2;
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
 wchar_t VAR4[100];
 VAR2 = VAR4;
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
static void FUN6()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 wchar_t VAR4[100];
 VAR2 = VAR4;
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
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
