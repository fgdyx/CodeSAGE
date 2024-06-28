#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(long * VAR5) const
{
 if (VAR5 != NULL)
 {
 VAR5[0] = 5L;
 FUN2(VAR5[0]);
 free(VAR5);
 }
}
}
#endif
