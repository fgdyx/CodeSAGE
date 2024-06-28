#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 }
 {
 wchar_t VAR5[50] = VAR4"";
 wcsncat(VAR5, VAR2, wcslen(VAR2));
 VAR5[50-1] = VAR4'';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 if(VAR3==5)
 {
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 }
 {
 wchar_t VAR5[50] = VAR4"";
 wcsncat(VAR5, VAR2, wcslen(VAR2));
 VAR5[50-1] = VAR4'';
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
