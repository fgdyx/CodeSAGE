#ifndef VAR1
#VAR2 ""
#VAR2 ""
#VAR2 <VAR3>
using namespace VAR4;
namespace VAR5
{
VAR6::FUN1(wchar_t * VAR7)
{
 VAR8 = VAR7;
#ifdef VAR9
 wcscat(VAR8, VAR10"");
#else
 wcscat(VAR8, VAR10"");
#endif
}
VAR6::~FUN1()
{
 {
 ifstream VAR11;
 VAR11.open((char *)VAR8);
 VAR11.close();
 }
}
}
#endif
