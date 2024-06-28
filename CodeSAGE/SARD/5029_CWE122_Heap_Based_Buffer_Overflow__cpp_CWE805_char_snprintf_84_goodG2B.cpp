#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define SNPRINTF _snprintf
#else
#define SNPRINTF snprintf
#endif
namespace VAR4
{
VAR5::FUN1(char * VAR6)
{
 VAR7 = VAR6;
 VAR7 = new char[100];
 VAR7[0] = '';
}
VAR5::~FUN1()
{
 {
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 FUN2(VAR7, 100, "", VAR8);
 FUN3(VAR7);
 delete [] VAR7;
 }
}
}
#endif
