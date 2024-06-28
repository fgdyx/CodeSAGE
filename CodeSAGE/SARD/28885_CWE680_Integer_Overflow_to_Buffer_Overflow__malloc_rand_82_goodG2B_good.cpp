#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int VAR5)
{
 {
 size_t VAR6;
 int *VAR7;
 VAR7 = (int*)malloc(VAR5 * sizeof(int));
 for (VAR6 = 0; VAR6 < (VAR8)VAR5; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 FUN2(VAR7[0]);
 free(VAR7);
 }
}
}
#endif
