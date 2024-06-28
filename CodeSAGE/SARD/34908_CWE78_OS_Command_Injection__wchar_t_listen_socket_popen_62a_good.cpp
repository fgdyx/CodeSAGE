#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4;
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 VAR5 *VAR6;
 VAR6 = FUN3(VAR2, VAR7"");
 if (VAR6 != NULL)
 {
 FUN4(VAR6);
 }
 }
}
void FUN5()
{
 FUN2();
}
#endif
