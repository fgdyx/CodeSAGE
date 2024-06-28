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
 {
 VAR6 *VAR7;
 VAR7 = FUN3(VAR2, VAR5"");
 if (VAR7 != NULL)
 {
 FUN4(VAR7);
 }
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
 {
 VAR6 *VAR7;
 VAR7 = FUN3(VAR2, VAR5"");
 if (VAR7 != NULL)
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
