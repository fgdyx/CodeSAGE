#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 VAR6 = new char[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
}
VAR4::~FUN1()
{
 {
 size_t VAR7, VAR8;
 char VAR9[100];
 memset(VAR9, '', 100-1);
 VAR9[100-1] = '';
 VAR8 = strlen(VAR9);
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR9[VAR7] = VAR6[VAR7];
 }
 VAR9[100-1] = '';
 FUN2(VAR9);
 delete [] VAR6;
 }
}
}
#endif
