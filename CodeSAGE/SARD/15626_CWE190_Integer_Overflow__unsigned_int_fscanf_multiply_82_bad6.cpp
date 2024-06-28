#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(unsigned int VAR5)
{
 if(VAR5 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
 unsigned int VAR6 = VAR5 * 2;
 FUN2(VAR6);
 }
}
}
#endif
