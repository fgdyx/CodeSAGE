#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define FOPEN fopen
#else
#define FOPEN fopen
#endif
namespace VAR4
{
VAR5::FUN1(char * VAR6)
{
 VAR7 = VAR6;
 strcat(VAR7, "");
}
VAR5::~FUN1()
{
 {
 VAR8 *VAR9 = NULL;
 VAR9 = FUN2(VAR7, "");
 if (VAR9 != NULL)
 {
 fclose(VAR9);
 }
 }
}
}
#endif
