#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int * VAR5)
{
 if (VAR5 != NULL)
 {
 VAR5[0] = 5;
 FUN2(VAR5[0]);
 free(VAR5);
 }
}
}
#endif
