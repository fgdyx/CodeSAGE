#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 if(VAR5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = VAR6'';
 }
 {
 wchar_t VAR7[10+1] = VAR8;
 memmove(VAR2, VAR7, (wcslen(VAR7) + 1) * sizeof(wchar_t));
 FUN3(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 if(VAR5==5)
 {
 VAR2 = VAR4;
 VAR2[0] = VAR6'';
 }
 {
 wchar_t VAR7[10+1] = VAR8;
 memmove(VAR2, VAR7, (wcslen(VAR7) + 1) * sizeof(wchar_t));
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
