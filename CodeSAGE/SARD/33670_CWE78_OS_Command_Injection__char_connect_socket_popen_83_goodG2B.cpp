#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define POPEN VAR4
#define PCLOSE VAR5
#else
#define POPEN popen
#define PCLOSE VAR6
#endif
namespace VAR7
{
VAR8::FUN1(char * VAR9)
{
 VAR10 = VAR9;
 strcat(VAR10, "");
}
VAR8::~FUN1()
{
 {
 VAR11 *VAR12;
 VAR12 = FUN2(VAR10, "");
 if (VAR12 != NULL)
 {
 FUN3(VAR12);
 }
 }
}
}
#endif
