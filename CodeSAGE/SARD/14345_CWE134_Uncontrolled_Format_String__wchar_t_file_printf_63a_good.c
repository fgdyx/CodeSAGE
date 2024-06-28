#ifndef VAR1
void FUN1(wchar_t * * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 FUN1(&VAR2);
}
void FUN3(wchar_t * * VAR2);
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 {
 size_t VAR5 = wcslen(VAR2);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 if (FUN5(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN6("");
 VAR2[VAR5] = VAR4'';
 }
 fclose(VAR7);
 }
 }
 }
 FUN3(&VAR2);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
