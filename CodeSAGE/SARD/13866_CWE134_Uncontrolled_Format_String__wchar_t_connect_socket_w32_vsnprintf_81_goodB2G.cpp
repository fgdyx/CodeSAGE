#ifndef VAR1
#VAR2 <VAR3.VAR4>
#VAR2 ""
#VAR2 ""
namespace VAR5
{
static void FUN1(wchar_t * VAR6, ...)
{
 {
 wchar_t VAR7[100] = VAR8"";
 va_list VAR9;
 FUN2(VAR9, VAR6);
 _vsnwprintf(VAR7, 100-1, VAR8"", VAR9);
 FUN3(VAR9);
 FUN4(VAR7);
 }
}
void VAR10::FUN5(wchar_t * VAR6) const
{
 FUN1(VAR6, VAR6);
}
}
#endif
