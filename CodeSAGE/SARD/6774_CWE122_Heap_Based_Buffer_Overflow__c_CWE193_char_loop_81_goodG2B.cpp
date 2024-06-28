#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(char * VAR5) const
{
 {
 char VAR6[10+1] = VAR7;
 size_t VAR8, VAR9;
 VAR9 = strlen(VAR6);
 for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
 {
 VAR5[VAR8] = VAR6[VAR8];
 }
 FUN2(VAR5);
 free(VAR5);
 }
}
}
#endif
