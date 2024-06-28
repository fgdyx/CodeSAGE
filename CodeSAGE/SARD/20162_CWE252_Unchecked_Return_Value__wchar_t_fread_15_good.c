#ifndef VAR1
static void FUN1()
{
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 wchar_t VAR2[100] = VAR3"";
 wchar_t * VAR4 = VAR2;
 if (fread((wchar_t *)VAR4, sizeof(wchar_t), (VAR5)(100-1), stdin) != 100-1)
 {
 FUN2("");
 }
 }
 break;
 }
}
static void FUN3()
{
 switch(6)
 {
 case 6:
 {
 wchar_t VAR2[100] = VAR3"";
 wchar_t * VAR4 = VAR2;
 if (fread((wchar_t *)VAR4, sizeof(wchar_t), (VAR5)(100-1), stdin) != 100-1)
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
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
