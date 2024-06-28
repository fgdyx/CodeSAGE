#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 /* FLAW: Did not leave space for a null terminator */
 VAR6 = new wchar_t[10];
}
VAR4::~FUN1()
{
 {
 wchar_t VAR7[10+1] = VAR8;
 size_t VAR9, VAR10;
 VAR10 = wcslen(VAR7);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR9 = 0; VAR9 < VAR10 + 1; VAR9++)
 {
 VAR6[VAR9] = VAR7[VAR9];
 }
 FUN2(VAR6);
 delete [] VAR6;
 }
}
}
#endif
