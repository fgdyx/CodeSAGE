#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 VAR7 = new VAR5[100];
}
VAR4::~FUN1()
{
 {
 TwoIntsClass VAR8[100];
 {
 size_t VAR9;
 for (VAR9 = 0; VAR9 < 100; VAR9++)
 {
 VAR8[VAR9].VAR10 = 0;
 VAR8[VAR9].VAR11 = 0;
 }
 }
 memcpy(VAR7, VAR8, 100*sizeof(VAR5));
 FUN2(VAR7[0].VAR10);
 delete [] VAR7;
 }
}
}
#endif
