#ifndef VAR1
#VAR2 ""
#VAR2 ""
#ifdef VAR3
#define OPEN _open
#define CLOSE VAR4
#else
#VAR2 <VAR5.VAR6>
#define OPEN open
#define CLOSE close
#endif
namespace VAR7
{
VAR8::FUN1(char * VAR9)
{
 VAR10 = VAR9;
#ifdef VAR3
 strcat(VAR10, "");
#else
 strcat(VAR10, "");
#endif
}
VAR8::~FUN1()
{
 {
 int VAR11;
 VAR11 = FUN2(VAR10, VAR12|VAR13, VAR14|VAR15);
 if (VAR11 != -1)
 {
 FUN3(VAR11);
 }
 }
}
}
#endif
