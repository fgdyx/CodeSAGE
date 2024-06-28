#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscpy(VAR2, VAR5"");
 {
 wchar_t * VAR2 = VAR3;
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 {
 size_t VAR6 = wcslen(VAR2);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 if (FUN4(VAR2+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN5("");
 VAR2[VAR6] = VAR5'';
 }
 fclose(VAR8);
 }
 }
 }
 {
 wchar_t * VAR2 = VAR3;
 FUN2(VAR5"", VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
