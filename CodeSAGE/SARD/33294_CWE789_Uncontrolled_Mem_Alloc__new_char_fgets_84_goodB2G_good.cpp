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
 {
 char VAR8[VAR9] = "";
 if (fgets(VAR8, VAR9, stdin) != NULL)
 {
 VAR3 = FUN3(VAR8, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
}
VAR6::~FUN2()
{
 {
 char * VAR10;
 if (VAR3 > strlen(VAR4) && VAR3 < 100)
 {
 VAR10 = new char[VAR3];
 strcpy(VAR10, VAR4);
 FUN4(VAR10);
 delete [] VAR10;
 }
 else
 {
 FUN4("");
 }
 }
}
}
#endif
