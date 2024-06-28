#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define SYSTEM _wsystem
#else
#define SYSTEM system
#endif
namespace VAR4
{
VAR5::FUN1(wchar_t * VAR6)
{
 VAR7 = VAR6;
 /* FLAW: the full path is not specified */
 wcscpy(VAR7, VAR8);
}
VAR5::~FUN1()
{
 /* POTENTIAL FLAW: Executing the _wsystem() function without specifying the full path to the executable
 * can allow an attacker to run their own program */
 if (FUN2(VAR7) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
}
#endif
