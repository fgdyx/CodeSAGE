#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(5==5)
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
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 {
 wchar_t VAR8[100] = VAR4"";
 FUN4(VAR8, 100-1, VAR4"", VAR2);
 FUN5(VAR8);
 }
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(5==5)
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
 if(5==5)
 {
 {
 wchar_t VAR8[100] = VAR4"";
 FUN4(VAR8, 100-1, VAR4"", VAR2);
 FUN5(VAR8);
 }
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(5==5)
 {
 {
 wchar_t VAR8[100] = VAR4"";
 FUN4(VAR8, 100-1, VAR2);
 FUN5(VAR8);
 }
 }
}
static void FUN8()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(5==5)
 {
 wcscpy(VAR2, VAR4"");
 }
 if(5==5)
 {
 {
 wchar_t VAR8[100] = VAR4"";
 FUN4(VAR8, 100-1, VAR2);
 FUN5(VAR8);
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
