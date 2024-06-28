#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
#ifdef VAR6
 wcscat(VAR2, VAR5"");
#else
 wcscat(VAR2, VAR5"");
#endif
 {
 wchar_t * VAR7 = VAR2;
 wchar_t * VAR2 = VAR7;
 {
 VAR8 *VAR9 = NULL;
 VAR9 = FUN2(VAR2, VAR5"");
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
