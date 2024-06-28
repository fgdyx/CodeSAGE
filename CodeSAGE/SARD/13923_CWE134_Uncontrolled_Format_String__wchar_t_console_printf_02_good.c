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
 if (100-VAR5 > 1)
 {
 if (FUN2(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = wcslen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == VAR4'')
 {
 VAR2[VAR5-1] = VAR4'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR5] = VAR4'';
 }
 }
 }
 }
 if(0)
 {
 FUN3("");
 }
 else
 {
 FUN4(VAR4"", VAR2);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(1)
 {
 {
 size_t VAR5 = wcslen(VAR2);
 if (100-VAR5 > 1)
 {
 if (FUN2(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = wcslen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == VAR4'')
 {
 VAR2[VAR5-1] = VAR4'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR5] = VAR4'';
 }
 }
 }
 }
 if(1)
 {
 FUN4(VAR4"", VAR2);
 }
}
static void FUN6()
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
 FUN4(VAR2);
 }
}
static void FUN7()
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
 FUN4(VAR2);
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
