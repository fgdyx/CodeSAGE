#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int VAR5) const
{
 {
 int VAR6;
 int * VAR7 = (int *)malloc(10 * sizeof(int));
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 if (VAR5 >= 0 && VAR5 < (10))
 {
 VAR7[VAR5] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN2(VAR7[VAR6]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR7);
 }
}
}
#endif
