#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
void FUN5(wchar_t * * VAR5)
{
 wchar_t * VAR2 = *VAR5;
 FUN1(VAR2, VAR2);
}
static void FUN6(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR6"", VAR3);
 FUN4(VAR3);
 }
}
void FUN7(wchar_t * * VAR5)
{
 wchar_t * VAR2 = *VAR5;
 FUN6(VAR2, VAR2);
}
#endif
