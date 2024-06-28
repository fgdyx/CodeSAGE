#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(char * VAR5) const
{
 {
 char VAR6[10+1] = VAR7;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memcpy(VAR5, VAR6, (strlen(VAR6) + 1) * sizeof(char));
 FUN2(VAR5);
 delete [] VAR5;
 }
}
}
#endif
