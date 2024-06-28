#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(1)
 {
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 if(0)
 {
 FUN3("");
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
 if(1)
 {
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 if(1)
 {
 fwprintf(VAR8, VAR4"", VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(0)
 {
 FUN3("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(1)
 {
 fwprintf(VAR8, VAR2);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(1)
 {
 wcscpy(VAR2, VAR4"");
 }
 if(1)
 {
 fwprintf(VAR8, VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
