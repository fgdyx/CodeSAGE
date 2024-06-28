#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 wcscat(VAR2, VAR7"");
 {
 wchar_t * VAR2 = VAR3;
 {
 VAR8 *VAR9 = NULL;
 VAR9 = FUN2(VAR2, VAR7"");
 if (VAR9 != NULL)
 {
 fclose(VAR9);
 }
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
