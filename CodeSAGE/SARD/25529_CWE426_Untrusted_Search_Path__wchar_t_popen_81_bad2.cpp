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
void VAR8::FUN1(wchar_t * VAR9) const
{
 {
 VAR10 *VAR11;
 /* POTENTIAL FLAW: Executing the wpopen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR11 = FUN2(VAR9, VAR12"");
 if (VAR11 != NULL)
 {
 FUN3(VAR11);
 }
 }
}
}
#endif
