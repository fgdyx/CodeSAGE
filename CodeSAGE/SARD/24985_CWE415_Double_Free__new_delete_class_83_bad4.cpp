#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 VAR7 = new VAR5;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR7;
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR7;
}
}
#endif
