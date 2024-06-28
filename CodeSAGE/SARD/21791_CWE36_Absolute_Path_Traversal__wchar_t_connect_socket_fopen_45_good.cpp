#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 VAR4 *VAR5 = NULL;
 VAR5 = FUN2(VAR2, VAR6"");
 if (VAR5 != NULL)
 {
 fclose(VAR5);
 }
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR7[VAR8] = VAR6"";
 VAR2 = VAR7;
#ifdef VAR9
 wcscat(VAR2, VAR6"");
#else
 wcscat(VAR2, VAR6"");
#endif
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
