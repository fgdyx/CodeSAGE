#ifndef VAR1
void FUN1(VAR2<int, wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<int, wchar_t *> VAR3;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 wcscpy(VAR4, VAR6"");
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN3(VAR2<int, wchar_t *> VAR3);
static void FUN4()
{
 wchar_t * VAR4;
 VAR2<int, wchar_t *> VAR3;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 {
 size_t VAR7 = wcslen(VAR4);
 VAR8 * VAR9;
 if (100-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 if (FUN5(VAR4+VAR7, (int)(100-VAR7), VAR9) == NULL)
 {
 FUN6("");
 VAR4[VAR7] = VAR6'';
 }
 fclose(VAR9);
 }
 }
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN3(VAR3);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
