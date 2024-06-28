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
 /* FLAW: the full path is not specified */
 wcscpy(VAR10, VAR11);
}
VAR8::~FUN1()
{
 {
 VAR12 *VAR13;
 /* POTENTIAL FLAW: Executing the wpopen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR13 = FUN2(VAR10, VAR14"");
 if (VAR13 != NULL)
 {
 FUN3(VAR13);
 }
 }
}
}
#endif
