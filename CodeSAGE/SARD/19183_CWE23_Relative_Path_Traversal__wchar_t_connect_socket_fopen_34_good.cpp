#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 unionType VAR3;
 wchar_t VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 wcscat(VAR2, VAR7"");
 VAR3.VAR8 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR9;
 {
 VAR10 *VAR11 = NULL;
 VAR11 = FUN2(VAR2, VAR7"");
 if (VAR11 != NULL)
 {
 fclose(VAR11);
 }
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
