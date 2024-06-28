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
 size_t VAR7,VAR8;
 int *VAR9;
 VAR7 = VAR6 * sizeof(int);
 VAR9 = (int*)new char[VAR7];
 for (VAR8 = 0; VAR8 < (VAR10)VAR6; VAR8++)
 {
 VAR9[VAR8] = 0;
 }
 FUN2(VAR9[0]);
 delete [] VAR9;
 }
}
}
#endif
