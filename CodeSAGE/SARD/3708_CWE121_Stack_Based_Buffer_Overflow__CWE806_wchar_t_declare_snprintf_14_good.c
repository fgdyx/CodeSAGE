#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(VAR4!=5)
 {
 FUN2("");
 }
 else
 {
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 }
 {
 wchar_t VAR6[50] = VAR5"";
 FUN3(VAR6, wcslen(VAR2), VAR5"", VAR2);
 FUN4(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(VAR4==5)
 {
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 }
 {
 wchar_t VAR6[50] = VAR5"";
 FUN3(VAR6, wcslen(VAR2), VAR5"", VAR2);
 FUN4(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
