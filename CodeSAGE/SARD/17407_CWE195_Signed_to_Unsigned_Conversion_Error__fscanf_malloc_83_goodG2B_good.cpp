#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int VAR5)
{
 VAR6 = VAR5;
 VAR6 = 100-1;
}
VAR4::~FUN1()
{
 if (VAR6 < 100)
 {
 char * VAR7 = (char *)malloc(VAR6);
 memset(VAR7, '', VAR6-1);
 VAR7[VAR6-1] = '';
 FUN2(VAR7);
 free(VAR7);
 }
}
}
#endif
