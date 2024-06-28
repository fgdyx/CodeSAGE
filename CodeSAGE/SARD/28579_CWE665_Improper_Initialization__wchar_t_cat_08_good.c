#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2[0] = VAR4'';
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 wcscat(VAR2, VAR5);
 FUN4(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(FUN6())
 {
 VAR2[0] = VAR4'';
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 wcscat(VAR2, VAR5);
 FUN4(VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
