#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 break;
 }
 {
 wchar_t VAR4[50] = VAR3"";
 memmove(VAR4, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR4[50-1] = VAR3'';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 switch(6)
 {
 case 6:
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 break;
 default:
 FUN2("");
 break;
 }
 {
 wchar_t VAR4[50] = VAR3"";
 memmove(VAR4, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR4[50-1] = VAR3'';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
