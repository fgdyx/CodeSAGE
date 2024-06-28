#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int * VAR5)
{
 VAR6 = VAR5;
 VAR6 = (int *)malloc(10*sizeof(int));
}
VAR4::~FUN1()
{
 {
 int VAR7[10] = {0};
 size_t VAR8;
 for (VAR8 = 0; VAR8 < 10; VAR8++)
 {
 VAR6[VAR8] = VAR7[VAR8];
 }
 FUN2(VAR6[0]);
 free(VAR6);
 }
}
}
#endif
