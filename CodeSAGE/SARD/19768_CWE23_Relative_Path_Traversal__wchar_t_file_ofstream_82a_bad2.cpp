#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 {
 size_t VAR6 = wcslen(VAR2);
 VAR7 * VAR8;
 if (VAR4-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN2(VAR2+VAR6, (int)(VAR4-VAR6), VAR8) == NULL)
 {
 FUN3("");
 VAR2[VAR6] = VAR10'';
 }
 fclose(VAR8);
 }
 }
 }
 VAR11* VAR12 = new VAR13;
 VAR12->FUN4(VAR2);
 delete VAR12;
}
#endif
