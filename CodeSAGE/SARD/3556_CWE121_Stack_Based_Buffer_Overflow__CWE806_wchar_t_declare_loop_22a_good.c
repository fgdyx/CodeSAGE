#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
wchar_t * FUN1(wchar_t * VAR4);
static void FUN2()
{
 wchar_t * VAR4;
 wchar_t VAR5[100];
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 wchar_t VAR6[50] = VAR7"";
 size_t VAR8, VAR9;
 VAR9 = wcslen(VAR4);
 for (VAR8 = 0; VAR8 < VAR9; VAR8++)
 {
 VAR6[VAR8] = VAR4[VAR8];
 }
 VAR6[50-1] = VAR7'';
 FUN3(VAR4);
 }
}
wchar_t * FUN4(wchar_t * VAR4);
static void FUN5()
{
 wchar_t * VAR4;
 wchar_t VAR5[100];
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 wchar_t VAR6[50] = VAR7"";
 size_t VAR8, VAR9;
 VAR9 = wcslen(VAR4);
 for (VAR8 = 0; VAR8 < VAR9; VAR8++)
 {
 VAR6[VAR8] = VAR4[VAR8];
 }
 VAR6[50-1] = VAR7'';
 FUN3(VAR4);
 }
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
