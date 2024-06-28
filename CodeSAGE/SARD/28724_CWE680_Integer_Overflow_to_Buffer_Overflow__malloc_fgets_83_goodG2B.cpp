#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int VAR5)
{
 VAR6 = VAR5;
 VAR6 = 20;
}
VAR4::~FUN1()
{
 {
 size_t VAR7;
 int *VAR8;
 VAR8 = (int*)malloc(VAR6 * sizeof(int));
 for (VAR7 = 0; VAR7 < (VAR9)VAR6; VAR7++)
 {
 VAR8[VAR7] = 0;
 }
 FUN2(VAR8[0]);
 free(VAR8);
 }
}
}
#endif
