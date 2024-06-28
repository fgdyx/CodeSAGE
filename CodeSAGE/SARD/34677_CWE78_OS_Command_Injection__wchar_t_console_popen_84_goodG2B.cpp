#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define POPEN VAR4
#define PCLOSE VAR5
#else
#define POPEN popen
#define PCLOSE VAR6
#endif
namespace VAR7
{
VAR8::FUN1(wchar_t * VAR9)
{
 VAR10 = VAR9;
 wcscat(VAR10, VAR11"");
}
VAR8::~FUN1()
{
 {
 VAR12 *VAR13;
 VAR13 = FUN2(VAR10, VAR11"");
 if (VAR13 != NULL)
 {
 FUN3(VAR13);
 }
 }
}
}
#endif
