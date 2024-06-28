#ifndef VAR1
void FUN1(void * VAR2)
{
 unsigned int * VAR3 = (unsigned int *)VAR2;
 unsigned int VAR4 = (*VAR3);
 {
 unsigned int VAR5 = VAR4 + 1;
 FUN2(VAR5);
 }
}
void FUN3(void * VAR2)
{
 unsigned int * VAR3 = (unsigned int *)VAR2;
 unsigned int VAR4 = (*VAR3);
 if (VAR4 < VAR6)
 {
 unsigned int VAR5 = VAR4 + 1;
 FUN2(VAR5);
 }
 else
 {
 FUN4("");
 }
}
#endif
