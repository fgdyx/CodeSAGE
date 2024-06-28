#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 VAR6 = (char *)malloc((10+1)*sizeof(char));
}
VAR4::~FUN1()
{
 {
 char VAR7[10+1] = VAR8;
 size_t VAR9, VAR10;
 VAR10 = strlen(VAR7);
 for (VAR9 = 0; VAR9 < VAR10 + 1; VAR9++)
 {
 VAR6[VAR9] = VAR7[VAR9];
 }
 FUN2(VAR6);
 free(VAR6);
 }
}
}
#endif
