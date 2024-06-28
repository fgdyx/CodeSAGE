#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 {
 size_t VAR7 = strlen(VAR6);
 if (100-VAR7 > 1)
 {
 if (fgets(VAR6+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR6);
 if (VAR7 > 0 && VAR6[VAR7-1] == '')
 {
 VAR6[VAR7-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR6[VAR7] = '';
 }
 }
 }
}
VAR4::~FUN1()
{
 FUN3("", VAR6);
}
}
#endif
