#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fwprintf(VAR8, VAR2);
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
