#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(wchar_t * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t VAR6[100] = VAR7"";
 FUN3(VAR6, 100-1, VAR7"", VAR5);
 FUN4(VAR6);
 }
 }
}
static void FUN5()
{
 wchar_t * VAR5;
 wchar_t VAR8[100] = VAR7"";
 VAR5 = VAR8;
 {
 size_t VAR9 = wcslen(VAR5);
 VAR10 * VAR11;
 if (100-VAR9 > 1)
 {
 VAR11 = fopen(VAR12, "");
 if (VAR11 != NULL)
 {
 if (FUN6(VAR5+VAR9, (int)(100-VAR9), VAR11) == NULL)
 {
 FUN2("");
 VAR5[VAR9] = VAR7'';
 }
 fclose(VAR11);
 }
 }
 }
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN7(wchar_t * VAR5)
{
 if(VAR3)
 {
 {
 wchar_t VAR6[100] = VAR7"";
 FUN3(VAR6, 100-1, VAR7"", VAR5);
 FUN4(VAR6);
 }
 }
}
static void FUN8()
{
 wchar_t * VAR5;
 wchar_t VAR8[100] = VAR7"";
 VAR5 = VAR8;
 {
 size_t VAR9 = wcslen(VAR5);
 VAR10 * VAR11;
 if (100-VAR9 > 1)
 {
 VAR11 = fopen(VAR12, "");
 if (VAR11 != NULL)
 {
 if (FUN6(VAR5+VAR9, (int)(100-VAR9), VAR11) == NULL)
 {
 FUN2("");
 VAR5[VAR9] = VAR7'';
 }
 fclose(VAR11);
 }
 }
 }
 VAR3 = 1;
 FUN7(VAR5);
}
static void FUN9(wchar_t * VAR5)
{
 if(VAR4)
 {
 {
 wchar_t VAR6[100] = VAR7"";
 FUN3(VAR6, 100-1, VAR5);
 FUN4(VAR6);
 }
 }
}
static void FUN10()
{
 wchar_t * VAR5;
 wchar_t VAR8[100] = VAR7"";
 VAR5 = VAR8;
 wcscpy(VAR5, VAR7"");
 VAR4 = 1;
 FUN9(VAR5);
}
void FUN11()
{
 FUN5();
 FUN8();
 FUN10();
}
#endif
