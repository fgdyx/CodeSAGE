#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(wchar_t * VAR5)
{
 VAR6 = VAR5;
 {
 size_t VAR7 = wcslen(VAR6);
 if (250-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR6+VAR7, (int)(250-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR6);
 if (VAR7 > 0 && VAR6[VAR7-1] == VAR8'')
 {
 VAR6[VAR7-1] = VAR8'';
 }
 }
 else
 {
 FUN3("");
 VAR6[VAR7] = VAR8'';
 }
 }
 }
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN4(VAR6);
}
}
#endif
