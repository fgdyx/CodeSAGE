#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 }
 {
 wchar_t VAR6[10+1] = VAR7;
 wcsncpy(VAR2, VAR6, wcslen(VAR6) + 1);
 FUN3(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 if(5==5)
 {
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 }
 {
 wchar_t VAR6[10+1] = VAR7;
 wcsncpy(VAR2, VAR6, wcslen(VAR6) + 1);
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
