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
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 if (FUN3(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN4("");
 VAR2[VAR5] = VAR4'';
 }
 fclose(VAR7);
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
 FUN6(VAR4"", VAR2);
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 size_t VAR5 = wcslen(VAR2);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 if (FUN3(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN4("");
 VAR2[VAR5] = VAR4'';
 }
 fclose(VAR7);
 }
 }
 }
 }
 if(FUN2())
 {
 FUN6(VAR4"", VAR2);
 }
}
static void FUN8()
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
 FUN6(VAR2);
 }
}
static void FUN9()
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
 FUN6(VAR2);
 }
}
void FUN10()
{
 FUN1();
 FUN7();
 FUN8();
 FUN9();
}
#endif
