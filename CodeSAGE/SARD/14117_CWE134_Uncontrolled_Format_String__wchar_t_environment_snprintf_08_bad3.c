#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 }
 if(FUN2())
 {
 {
 wchar_t VAR8[100] = VAR4"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN4(VAR8, 100-1, VAR2);
 FUN5(VAR8);
 }
 }
}
#endif
