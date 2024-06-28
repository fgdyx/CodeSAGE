#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(wchar_t * VAR5, ...);
static void FUN2()
{
 wchar_t * VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR5 = VAR6;
 {
 size_t VAR8 = wcslen(VAR5);
 if (100-VAR8 > 1)
 {
 if (FUN3(VAR5+VAR8, (int)(100-VAR8), stdin) != NULL)
 {
 VAR8 = wcslen(VAR5);
 if (VAR8 > 0 && VAR5[VAR8-1] == VAR7'')
 {
 VAR5[VAR8-1] = VAR7'';
 }
 }
 else
 {
 FUN4("");
 VAR5[VAR8] = VAR7'';
 }
 }
 }
 VAR2 = 0;
 FUN1(VAR5, VAR5);
}
void FUN5(wchar_t * VAR5, ...);
static void FUN6()
{
 wchar_t * VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR5 = VAR6;
 {
 size_t VAR8 = wcslen(VAR5);
 if (100-VAR8 > 1)
 {
 if (FUN3(VAR5+VAR8, (int)(100-VAR8), stdin) != NULL)
 {
 VAR8 = wcslen(VAR5);
 if (VAR8 > 0 && VAR5[VAR8-1] == VAR7'')
 {
 VAR5[VAR8-1] = VAR7'';
 }
 }
 else
 {
 FUN4("");
 VAR5[VAR8] = VAR7'';
 }
 }
 }
 VAR3 = 1;
 FUN5(VAR5, VAR5);
}
void FUN7(wchar_t * VAR5, ...);
static void FUN8()
{
 wchar_t * VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR5 = VAR6;
 wcscpy(VAR5, VAR7"");
 VAR4 = 1;
 FUN7(VAR5, VAR5);
}
void FUN9()
{
 FUN2();
 FUN6();
 FUN8();
}
#endif
