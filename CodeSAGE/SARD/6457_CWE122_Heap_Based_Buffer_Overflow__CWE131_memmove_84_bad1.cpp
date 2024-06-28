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
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 memmove(VAR6, VAR7, 10*sizeof(int));
 FUN2(VAR6[0]);
 free(VAR6);
 }
}
}
#endif
