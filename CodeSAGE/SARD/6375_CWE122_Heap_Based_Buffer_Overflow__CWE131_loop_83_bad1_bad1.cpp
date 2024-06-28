#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int * VAR5)
{
 VAR6 = VAR5;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR6 = (int *)malloc(10);
}
VAR4::~FUN1()
{
 {
 int VAR7[10] = {0};
 size_t VAR8;
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 for (VAR8 = 0; VAR8 < 10; VAR8++)
 {
 VAR6[VAR8] = VAR7[VAR8];
 }
 FUN2(VAR6[0]);
 free(VAR6);
 }
}
}
#endif
