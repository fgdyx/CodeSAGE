#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR6, VAR7'', 100-1);
 VAR6[100-1] = VAR7'';
}
VAR4::~FUN1()
{
 {
 wchar_t VAR8[50] = VAR7"";
 size_t VAR9, VAR10;
 VAR10 = wcslen(VAR6);
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 for (VAR9 = 0; VAR9 < VAR10; VAR9++)
 {
 VAR8[VAR9] = VAR6[VAR9];
 }
 VAR8[50-1] = VAR7'';
 FUN2(VAR6);
 }
}
}
#endif
