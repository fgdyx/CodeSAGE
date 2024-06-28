#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 VAR7 = new VAR5[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR7;
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR7;
}
}
#endif
