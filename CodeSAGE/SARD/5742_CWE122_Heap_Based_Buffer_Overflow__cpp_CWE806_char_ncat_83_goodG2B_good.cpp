#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 memset(VAR6, '', 50-1);
 VAR6[50-1] = '';
}
VAR4::~FUN1()
{
 {
 char VAR7[50] = "";
 strncat(VAR7, VAR6, strlen(VAR6));
 VAR7[50-1] = '';
 FUN2(VAR6);
 delete [] VAR6;
 }
}
}
#endif
