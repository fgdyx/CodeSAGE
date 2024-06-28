#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
void FUN5(VAR4<wchar_t *> VAR5)
{
 wchar_t * VAR2 = VAR5.FUN6();
 FUN1(VAR2, VAR2);
}
static void FUN7(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR6"", VAR3);
 FUN4(VAR3);
 }
}
void FUN8(VAR4<wchar_t *> VAR5)
{
 wchar_t * VAR2 = VAR5.FUN6();
 FUN7(VAR2, VAR2);
}
#endif
