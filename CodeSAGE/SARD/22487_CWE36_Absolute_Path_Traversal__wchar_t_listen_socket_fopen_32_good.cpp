#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[VAR6] = VAR7"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
#ifdef VAR8
 wcscat(VAR2, VAR7"");
#else
 wcscat(VAR2, VAR7"");
#endif
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 VAR9 *VAR10 = NULL;
 VAR10 = FUN2(VAR2, VAR7"");
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
