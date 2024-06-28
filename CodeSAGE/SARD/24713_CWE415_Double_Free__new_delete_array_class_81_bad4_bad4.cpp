#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(VAR5 * VAR6) const
{
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR6;
}
}
#endif
