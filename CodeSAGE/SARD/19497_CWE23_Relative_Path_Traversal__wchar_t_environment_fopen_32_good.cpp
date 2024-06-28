#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 wcscat(VAR2, VAR8"");
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 VAR9 *VAR10 = NULL;
 VAR10 = FUN2(VAR2, VAR8"");
 if (VAR10 != NULL)
 {
 fclose(VAR10);
 }
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
