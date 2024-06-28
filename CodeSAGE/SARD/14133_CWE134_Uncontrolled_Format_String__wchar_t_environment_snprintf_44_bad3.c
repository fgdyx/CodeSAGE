#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100] = VAR4"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR3, 100-1, VAR2);
 FUN3(VAR3);
 }
}
void FUN4()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR6;
 wchar_t VAR7[100] = VAR4"";
 VAR2 = VAR7;
 {
 size_t VAR8 = wcslen(VAR2);
 wchar_t * VAR9 = FUN5(VAR10);
 if (VAR9 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR8, VAR9, 100-VAR8-1);
 }
 }
 FUN6(VAR2);
}
#endif
