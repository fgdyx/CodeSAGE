#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 {
 char * VAR7 = (char *)malloc(100*sizeof(char));
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 VAR6 = VAR7;
 }
}
VAR4::~FUN1()
{
 {
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 memmove(VAR8, VAR6, 100*sizeof(char));
 VAR8[100-1] = '';
 FUN2(VAR8);
 }
}
}
#endif
