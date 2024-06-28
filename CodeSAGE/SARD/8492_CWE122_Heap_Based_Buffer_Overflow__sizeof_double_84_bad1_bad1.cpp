#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(double * VAR5)
{
 VAR6 = VAR5;
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR6 = (double *)malloc(sizeof(VAR6));
 *VAR6 = 1.7E300;
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN2(*VAR6);
 free(VAR6);
}
}
#endif
