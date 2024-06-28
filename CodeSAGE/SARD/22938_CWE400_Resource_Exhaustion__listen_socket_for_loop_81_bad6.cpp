#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int VAR5) const
{
 {
 size_t VAR6 = 0;
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
 for (VAR6 = 0; VAR6 < (VAR7)VAR5; VAR6++)
 {
 FUN2("");
 }
 }
}
}
#endif
