#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 {
 wchar_t * VAR7 = new wchar_t[100];
 wmemset(VAR7, VAR8'', 100-1);
 VAR7[100-1] = VAR8'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR6 = VAR7 - 8;
 }
}
VAR4::~FUN1()
{
 {
 wchar_t VAR9[100];
 wmemset(VAR9, VAR8'', 100-1);
 VAR9[100-1] = VAR8'';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 wcscpy(VAR6, VAR9);
 FUN2(VAR6);
 }
}
}
#endif
