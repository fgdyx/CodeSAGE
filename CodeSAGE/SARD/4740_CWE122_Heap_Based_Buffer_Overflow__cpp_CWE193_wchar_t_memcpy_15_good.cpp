#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = new wchar_t[10+1];
 break;
 }
 {
 wchar_t VAR3[10+1] = VAR4;
 memcpy(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
 FUN3(VAR2);
 delete [] VAR2;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = new wchar_t[10+1];
 break;
 default:
 FUN2("");
 break;
 }
 {
 wchar_t VAR3[10+1] = VAR4;
 memcpy(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
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
