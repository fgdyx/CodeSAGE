#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 if(FUN2())
 {
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 }
 else
 {
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 }
 {
 wchar_t VAR5[50] = VAR4"";
 memmove(VAR5, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR5[50-1] = VAR4'';
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
