#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 VAR5* VAR6 = new VAR7;
 VAR6->FUN2(VAR2);
 delete VAR6;
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 {
 size_t VAR8 = wcslen(VAR2);
 VAR9 * VAR10;
 if (100-VAR8 > 1)
 {
 VAR10 = fopen(VAR11, "");
 if (VAR10 != NULL)
 {
 if (FUN4(VAR2+VAR8, (int)(100-VAR8), VAR10) == NULL)
 {
 FUN5("");
 VAR2[VAR8] = VAR4'';
 }
 fclose(VAR10);
 }
 }
 }
 VAR5* VAR6 = new VAR12;
 VAR6->FUN2(VAR2);
 delete VAR6;
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
