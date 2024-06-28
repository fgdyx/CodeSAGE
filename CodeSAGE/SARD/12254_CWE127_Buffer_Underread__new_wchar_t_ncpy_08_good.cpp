#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 wchar_t * VAR3 = new wchar_t[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 wcsncpy(VAR5, VAR2, wcslen(VAR5));
 VAR5[100-1] = VAR4'';
 FUN4(VAR5);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN6())
 {
 {
 wchar_t * VAR3 = new wchar_t[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 }
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 wcsncpy(VAR5, VAR2, wcslen(VAR5));
 VAR5[100-1] = VAR4'';
 FUN4(VAR5);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
