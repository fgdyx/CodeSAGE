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
 ifstream VAR7;
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
}
static void FUN3()
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
 ifstream VAR7;
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
