#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 wcscpy(VAR2, VAR3"");
}
void FUN2(wchar_t * &VAR2)
{
 {
 size_t VAR4 = wcslen(VAR2);
 VAR5 * VAR6;
 if (100-VAR4 > 1)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 != NULL)
 {
 if (FUN3(VAR2+VAR4, (int)(100-VAR4), VAR6) == NULL)
 {
 FUN4("");
 VAR2[VAR4] = VAR3'';
 }
 fclose(VAR6);
 }
 }
 }
}
#endif
