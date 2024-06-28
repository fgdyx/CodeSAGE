#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4;
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 wcscat(VAR2, VAR5"");
 break;
 }
 if (FUN3(VAR2) <= 0)
 {
 FUN2("");
 FUN4(1);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4;
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 wcscat(VAR2, VAR5"");
 break;
 default:
 FUN2("");
 break;
 }
 if (FUN3(VAR2) <= 0)
 {
 FUN2("");
 FUN4(1);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
