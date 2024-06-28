#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 VAR6 *VAR7 = NULL;
 VAR7 = FUN3(VAR2, VAR8"");
 if (VAR7 != NULL)
 {
 fclose(VAR7);
 }
 }
}
void FUN4()
{
 FUN2();
}
#endif
