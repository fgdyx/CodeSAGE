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
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 {
 wchar_t VAR8[100] = VAR4"";
 FUN6(VAR8, 100-1, VAR4"", VAR2);
 FUN7(VAR8);
 }
 }
}
static void FUN8()
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
 if(FUN2())
 {
 {
 wchar_t VAR8[100] = VAR4"";
 FUN6(VAR8, 100-1, VAR4"", VAR2);
 FUN7(VAR8);
 }
 }
}
static void FUN9()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(FUN2())
 {
 {
 wchar_t VAR8[100] = VAR4"";
 FUN6(VAR8, 100-1, VAR2);
 FUN7(VAR8);
 }
 }
}
static void FUN10()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 wcscpy(VAR2, VAR4"");
 }
 if(FUN2())
 {
 {
 wchar_t VAR8[100] = VAR4"";
 FUN6(VAR8, 100-1, VAR2);
 FUN7(VAR8);
 }
 }
}
void FUN11()
{
 FUN1();
 FUN8();
 FUN9();
 FUN10();
}
#endif
