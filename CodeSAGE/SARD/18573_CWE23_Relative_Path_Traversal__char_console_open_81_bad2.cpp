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
void VAR8::FUN1(char * VAR9) const
{
 {
 int VAR10;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR10 = FUN2(VAR9, VAR11|VAR12, VAR13|VAR14);
 if (VAR10 != -1)
 {
 FUN3(VAR10);
 }
 }
}
}
#endif
