#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define SYSTEM system
#else
#define SYSTEM system
#endif
namespace VAR4
{
void VAR5::FUN1(char * VAR6)
{
 /* POTENTIAL FLAW: Executing the system() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 if (FUN2(VAR6) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
}
#endif
