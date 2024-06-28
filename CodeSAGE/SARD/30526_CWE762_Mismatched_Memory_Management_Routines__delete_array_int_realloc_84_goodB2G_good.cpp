#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int * VAR5)
{
 VAR6 = VAR5;
 VAR6 = NULL;
 VAR6 = (int *)realloc(VAR6, 100*sizeof(int));
}
VAR4::~FUN1()
{
 free(VAR6);
}
}
#endif
