#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define FUN1 (3 * sizeof(VAR3) + 2)
#define VAR4 ""
namespace VAR5
{
VAR6::FUN2(size_t VAR7)
{
 VAR3 = VAR7;
 VAR3 = 20;
}
VAR6::~FUN2()
{
 {
 char * VAR8;
 if (VAR3 > strlen(VAR4))
 {
 VAR8 = new char[VAR3];
 strcpy(VAR8, VAR4);
 FUN3(VAR8);
 delete [] VAR8;
 }
 else
 {
 FUN3("");
 }
 }
}
}
#endif
