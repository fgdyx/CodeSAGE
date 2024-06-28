#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(long * VAR5)
{
 VAR6 = VAR5;
 VAR6 = (long *)malloc(100*sizeof(long));
 /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
 free(VAR6);
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Possibly freeing memory twice */
 free(VAR6);
}
}
#endif
