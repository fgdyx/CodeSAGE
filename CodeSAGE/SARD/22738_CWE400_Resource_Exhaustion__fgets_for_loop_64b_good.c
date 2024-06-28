#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 {
 size_t VAR5 = 0;
 for (VAR5 = 0; VAR5 < (VAR6)VAR4; VAR5++)
 {
 FUN2("");
 }
 }
}
void FUN3(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 {
 size_t VAR5 = 0;
 if (VAR4 > 0 && VAR4 <= 20)
 {
 for (VAR5 = 0; VAR5 < (VAR6)VAR4; VAR5++)
 {
 FUN2("");
 }
 }
 }
}
#endif
