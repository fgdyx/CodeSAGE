#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[100];
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 wmemset(VAR2, VAR6'', 50-1);
 VAR2[50-1] = VAR6'';
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR7[50] = VAR6"";
 wcscat(VAR7, VAR2);
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
