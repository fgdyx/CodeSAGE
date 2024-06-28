#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 wcscat(VAR2, VAR4"");
 break;
 }
 FUN3(VAR5, VAR5, VAR6, VAR7, VAR8, NULL);
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 wcscat(VAR2, VAR4"");
 break;
 default:
 FUN2("");
 break;
 }
 FUN3(VAR5, VAR5, VAR6, VAR7, VAR8, NULL);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
