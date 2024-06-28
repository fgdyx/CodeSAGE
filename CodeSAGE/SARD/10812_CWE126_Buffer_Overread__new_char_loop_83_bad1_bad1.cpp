#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 /* FLAW: Use a small buffer */
 VAR6 = new char[50];
 memset(VAR6, '', 50-1);
 VAR6[50-1] = '';
}
VAR4::~FUN1()
{
 {
 size_t VAR7, VAR8;
 char VAR9[100];
 memset(VAR9, '', 100-1);
 VAR9[100-1] = '';
 VAR8 = strlen(VAR9);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
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
