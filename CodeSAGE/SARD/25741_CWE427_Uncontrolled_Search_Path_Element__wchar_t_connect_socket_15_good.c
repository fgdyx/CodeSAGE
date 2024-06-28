#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[250] = VAR4"";
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 wcscat(VAR2, VAR5);
 break;
 }
 FUN3(VAR2);
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[250] = VAR4"";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 wcscat(VAR2, VAR5);
 break;
 default:
 FUN2("");
 break;
 }
 FUN3(VAR2);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
