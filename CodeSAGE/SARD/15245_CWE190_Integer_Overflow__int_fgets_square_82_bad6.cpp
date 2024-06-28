#ifndef VAR1
#VAR2 ""
#VAR2 ""
#VAR2 <VAR3.VAR4>
namespace VAR5
{
void VAR6::FUN1(int VAR7)
{
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR8 = VAR7 * VAR7;
 FUN2(VAR8);
 }
}
}
#endif
