#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(long * VAR5)
{
 VAR6 = VAR5;
 VAR6 = new long;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR6;
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR6;
}
}
#endif
