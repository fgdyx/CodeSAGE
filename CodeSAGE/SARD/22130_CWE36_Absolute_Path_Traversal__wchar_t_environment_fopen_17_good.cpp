#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[VAR5] = VAR6"";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
#ifdef VAR7
 wcscat(VAR3, VAR6"");
#else
 wcscat(VAR3, VAR6"");
#endif
 }
 {
 VAR8 *VAR9 = NULL;
 VAR9 = FUN2(VAR3, VAR6"");
 if (VAR9 != NULL)
 {
 fclose(VAR9);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
