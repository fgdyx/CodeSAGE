#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 wcscat(VAR2, VAR6"");
 break;
 }
 {
 int VAR7;
 VAR7 = FUN3(VAR2, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
 {
 FUN4(VAR7);
 }
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 wcscat(VAR2, VAR6"");
 break;
 default:
 FUN2("");
 break;
 }
 {
 int VAR7;
 VAR7 = FUN3(VAR2, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
 {
 FUN4(VAR7);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
