#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int * VAR5) const
{
 {
 int VAR6[10] = {0};
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 memmove(VAR5, VAR6, 10*sizeof(int));
 FUN2(VAR5[0]);
 free(VAR5);
 }
}
}
#endif
