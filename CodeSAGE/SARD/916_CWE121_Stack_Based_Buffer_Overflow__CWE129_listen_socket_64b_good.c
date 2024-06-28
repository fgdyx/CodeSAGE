#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 {
 int VAR5;
 int VAR6[10] = { 0 };
 if (VAR4 >= 0)
 {
 VAR6[VAR4] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN2(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 {
 int VAR5;
 int VAR6[10] = { 0 };
 if (VAR4 >= 0 && VAR4 < (10))
 {
 VAR6[VAR4] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN2(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
