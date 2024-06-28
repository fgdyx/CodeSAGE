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
 {
 size_t VAR8 = strlen(VAR7);
 if (100-VAR8 > 1)
 {
 if (fgets(VAR7+VAR8, (int)(100-VAR8), stdin) != NULL)
 {
 VAR8 = strlen(VAR7);
 if (VAR8 > 0 && VAR7[VAR8-1] == '')
 {
 VAR7[VAR8-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR7[VAR8] = '';
 }
 }
 }
}
VAR5::~FUN1()
{
 {
 char VAR9[100] = "";
 FUN3(VAR9, 100-1, "", VAR7);
 FUN2(VAR9);
 }
}
}
#endif
