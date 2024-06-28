#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(short VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR6);
}
VAR4::~FUN1()
{
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 short VAR7 = VAR6 + 1;
 FUN2(VAR7);
 }
}
}
#endif
