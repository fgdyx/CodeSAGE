#ifndef VAR1
#VAR2 ""
#VAR2 ""
#VAR2 <VAR3.VAR4>
namespace VAR5
{
void VAR6::FUN1(unsigned int VAR7)
{
 {
 /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
 unsigned int VAR8 = VAR7 * VAR7;
 FUN2(VAR8);
 }
}
}
#endif
