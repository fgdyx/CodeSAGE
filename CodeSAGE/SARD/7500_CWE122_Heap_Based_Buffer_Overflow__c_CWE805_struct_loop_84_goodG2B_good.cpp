#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 VAR7 = (VAR5 *)malloc(100*sizeof(VAR5));
}
VAR4::~FUN1()
{
 {
 twoIntsStruct VAR8[100];
 {
 size_t VAR9;
 for (VAR9 = 0; VAR9 < 100; VAR9++)
 {
 VAR8[VAR9].VAR10 = 0;
 VAR8[VAR9].VAR11 = 0;
 }
 }
 {
 size_t VAR9;
 for (VAR9 = 0; VAR9 < 100; VAR9++)
 {
 VAR7[VAR9] = VAR8[VAR9];
 }
 FUN2(&VAR7[0]);
 free(VAR7);
 }
 }
}
}
#endif
