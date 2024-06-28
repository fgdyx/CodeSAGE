#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int * VAR5) const
{
 {
 int VAR6[100] = {0};
 {
 size_t VAR7;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR5[VAR7] = VAR6[VAR7];
 }
 FUN2(VAR5[0]);
 free(VAR5);
 }
 }
}
}
#endif
