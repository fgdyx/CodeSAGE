#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(char * VAR5)
{
 {
 size_t VAR6, VAR7;
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 VAR7 = strlen(VAR8);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR8[VAR6] = VAR5[VAR6];
 }
 VAR8[100-1] = '';
 FUN2(VAR8);
 delete [] VAR5;
 }
}
}
#endif
