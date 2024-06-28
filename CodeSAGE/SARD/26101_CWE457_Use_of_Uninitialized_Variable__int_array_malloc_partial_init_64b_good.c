#ifndef VAR1
void FUN1(void * VAR2)
{
 int * * VAR3 = (int * *)VAR2;
 int * VAR4 = (*VAR3);
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR4[VAR5]);
 }
 }
}
void FUN3(void * VAR2)
{
 int * * VAR3 = (int * *)VAR2;
 int * VAR4 = (*VAR3);
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR4[VAR5] = VAR5;
 }
 }
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR4[VAR5]);
 }
 }
}
#endif
