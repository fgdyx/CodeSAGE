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
void VAR8::FUN1(char * VAR9)
{
 {
 VAR10 *VAR11;
 /* POTENTIAL FLAW: Executing the popen() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 VAR11 = FUN2(VAR9, "");
 if (VAR11 != NULL)
 {
 FUN3(VAR11);
 }
 }
}
}
#endif
