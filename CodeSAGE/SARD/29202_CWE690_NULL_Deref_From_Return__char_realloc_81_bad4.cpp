#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(char * VAR5) const
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 strcpy(VAR5, "");
 FUN2(VAR5);
 free(VAR5);
}
}
#endif
