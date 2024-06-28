#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(char * VAR5) const
{
 FUN2(*VAR5);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR5;
}
}
#endif
