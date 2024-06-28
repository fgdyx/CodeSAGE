#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int VAR5) const
{
 if(VAR5 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
 int VAR6 = VAR5 * 2;
 FUN2(VAR6);
 }
}
}
#endif
