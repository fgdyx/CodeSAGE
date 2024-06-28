#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2[0] = VAR4'';
 }
 {
 size_t VAR5;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR4'', 100-1);
 VAR6[100-1] = VAR4'';
 VAR5 = wcslen(VAR6);
 wcsncat(VAR2, VAR6, VAR5);
 FUN3(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(1)
 {
 VAR2[0] = VAR4'';
 }
 {
 size_t VAR5;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR4'', 100-1);
 VAR6[100-1] = VAR4'';
 VAR5 = wcslen(VAR6);
 wcsncat(VAR2, VAR6, VAR5);
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
