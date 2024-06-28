#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 }
 {
 wchar_t VAR6[10+1] = VAR7;
 memcpy(VAR2, VAR6, (wcslen(VAR6) + 1) * sizeof(wchar_t));
 FUN4(VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 if(FUN6())
 {
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 }
 {
 wchar_t VAR6[10+1] = VAR7;
 memcpy(VAR2, VAR6, (wcslen(VAR6) + 1) * sizeof(wchar_t));
 FUN4(VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
