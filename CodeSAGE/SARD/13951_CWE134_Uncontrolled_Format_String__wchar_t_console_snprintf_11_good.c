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
 if (100-VAR5 > 1)
 {
 if (FUN3(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = wcslen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == VAR4'')
 {
 VAR2[VAR5-1] = VAR4'';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR5] = VAR4'';
 }
 }
 }
 }
 if(FUN5())
 {
 FUN4("");
 }
 else
 {
 {
 wchar_t VAR6[100] = VAR4"";
 FUN6(VAR6, 100-1, VAR4"", VAR2);
 FUN7(VAR6);
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
 if (100-VAR5 > 1)
 {
 if (FUN3(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = wcslen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == VAR4'')
 {
 VAR2[VAR5-1] = VAR4'';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR5] = VAR4'';
 }
 }
 }
 }
 if(FUN2())
 {
 {
 wchar_t VAR6[100] = VAR4"";
 FUN6(VAR6, 100-1, VAR4"", VAR2);
 FUN7(VAR6);
 }
 }
}
static void FUN9()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN5())
 {
 FUN4("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(FUN2())
 {
 {
 wchar_t VAR6[100] = VAR4"";
 FUN6(VAR6, 100-1, VAR2);
 FUN7(VAR6);
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
 wchar_t VAR6[100] = VAR4"";
 FUN6(VAR6, 100-1, VAR2);
 FUN7(VAR6);
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
