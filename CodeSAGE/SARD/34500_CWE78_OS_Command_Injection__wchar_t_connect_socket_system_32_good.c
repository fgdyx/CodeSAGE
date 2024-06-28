#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[100] = VAR6;
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 wcscat(VAR2, VAR7"");
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 if (FUN2(VAR2) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
 }
}
void FUN5()
{
 FUN1();
}
#endif
