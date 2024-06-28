#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(VAR5 * VAR6)
{
 VAR7 = VAR6;
 VAR7 = new VAR5[100];
}
VAR4::~FUN1()
{
 {
 int64_t VAR8[100] = {0};
 memmove(VAR7, VAR8, 100*sizeof(VAR5));
 FUN2(VAR7[0]);
 delete [] VAR7;
 }
}
}
#endif
