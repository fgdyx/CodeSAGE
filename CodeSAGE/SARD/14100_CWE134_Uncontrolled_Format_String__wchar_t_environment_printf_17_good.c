#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 wchar_t * VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 size_t VAR7 = wcslen(VAR4);
 wchar_t * VAR8 = FUN2(VAR9);
 if (VAR8 != NULL)
 {
 wcsncat(VAR4+VAR7, VAR8, 100-VAR7-1);
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 FUN3(VAR6"", VAR4);
 }
}
static void FUN4()
{
 int VAR10,VAR11;
 wchar_t * VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 for(VAR10 = 0; VAR10 < 1; VAR10++)
 {
 wcscpy(VAR4, VAR6"");
 }
 for(VAR11 = 0; VAR11 < 1; VAR11++)
 {
 FUN3(VAR4);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
