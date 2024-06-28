#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(long * VAR5)
{
 VAR6 = VAR5;
 VAR6 = (long *)calloc(100, sizeof(long));
}
VAR4::~FUN1()
{
 free(VAR6);
}
}
#endif
