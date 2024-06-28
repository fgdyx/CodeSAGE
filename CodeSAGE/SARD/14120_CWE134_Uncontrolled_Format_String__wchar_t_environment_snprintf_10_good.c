#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN2(VAR8);
 if (VAR7 != NULL)
 {
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 }
 if(VAR9)
 {
 FUN3("");
 }
 else
 {
 {
 wchar_t VAR10[100] = VAR4"";
 FUN4(VAR10, 100-1, VAR4"", VAR2);
 FUN5(VAR10);
 }
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN2(VAR8);
 if (VAR7 != NULL)
 {
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 }
 if(VAR5)
 {
 {
 wchar_t VAR10[100] = VAR4"";
 FUN4(VAR10, 100-1, VAR4"", VAR2);
 FUN5(VAR10);
 }
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR9)
 {
 FUN3("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(VAR5)
 {
 {
 wchar_t VAR10[100] = VAR4"";
 FUN4(VAR10, 100-1, VAR2);
 FUN5(VAR10);
 }
 }
}
static void FUN8()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5)
 {
 wcscpy(VAR2, VAR4"");
 }
 if(VAR5)
 {
 {
 wchar_t VAR10[100] = VAR4"";
 FUN4(VAR10, 100-1, VAR2);
 FUN5(VAR10);
 }
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
