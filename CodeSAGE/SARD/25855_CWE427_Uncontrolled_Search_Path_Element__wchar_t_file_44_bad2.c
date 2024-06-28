#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN2(VAR2);
}
void FUN3()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[250] = VAR6"";
 VAR2 = VAR5;
 {
 size_t VAR7 = wcslen(VAR2);
 VAR8 * VAR9;
 if (250-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN4(VAR2+VAR7, (int)(250-VAR7), VAR9) == NULL)
 {
 FUN5("");
 VAR2[VAR7] = VAR6'';
 }
 fclose(VAR9);
 }
 }
 }
 FUN6(VAR2);
}
#endif
