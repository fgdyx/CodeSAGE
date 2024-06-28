#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define FUN1 (3 * sizeof(VAR3) + 2)
namespace VAR4
{
VAR5::FUN2(int VAR6)
{
 VAR3 = VAR6;
 VAR3 = 7;
}
VAR5::~FUN2()
{
 {
 int VAR7;
 int * VAR8 = new int[10];
 for (VAR7 = 0; VAR7 < 10; VAR7++)
 {
 VAR8[VAR7] = 0;
 }
 if (VAR3 >= 0)
 {
 VAR8[VAR3] = 1;
 for(VAR7 = 0; VAR7 < 10; VAR7++)
 {
 FUN3(VAR8[VAR7]);
 }
 }
 else
 {
 FUN4("");
 }
 delete[] VAR8;
 }
}
}
#endif
