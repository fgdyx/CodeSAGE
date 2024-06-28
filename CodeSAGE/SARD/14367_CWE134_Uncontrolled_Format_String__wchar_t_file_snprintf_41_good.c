#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100] = VAR4"";
 FUN2(VAR3, 100-1, VAR2);
 FUN3(VAR3);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 wcscpy(VAR2, VAR4"");
 FUN1(VAR2);
}
static void FUN5(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100] = VAR4"";
 FUN2(VAR3, 100-1, VAR4"", VAR2);
 FUN3(VAR3);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 {
 size_t VAR6 = wcslen(VAR2);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 if (FUN7(VAR2+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN8("");
 VAR2[VAR6] = VAR4'';
 }
 fclose(VAR8);
 }
 }
 }
 FUN5(VAR2);
}
void FUN9()
{
 FUN6();
 FUN4();
}
#endif
