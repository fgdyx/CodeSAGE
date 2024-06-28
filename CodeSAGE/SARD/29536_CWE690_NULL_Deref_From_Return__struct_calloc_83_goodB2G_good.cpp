#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 VAR7 = (VAR5 *)calloc(1, sizeof(VAR5));
}
VAR4::~FUN1()
{
 if (VAR7 != NULL)
 {
 VAR7[0].VAR8 = 1;
 VAR7[0].VAR9 = 1;
 FUN2(&VAR7[0]);
 free(VAR7);
 }
}
}
#endif
