#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 else
 {
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 if(FUN2())
 {
 fwprintf(VAR8, VAR4"", VAR2);
 }
 else
 {
 fwprintf(VAR8, VAR4"", VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 wcscpy(VAR2, VAR4"");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(FUN2())
 {
 fwprintf(VAR8, VAR2);
 }
 else
 {
 fwprintf(VAR8, VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
