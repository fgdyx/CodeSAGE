#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 VAR5 * VAR6 = new(VAR4) VAR5;
 VAR6->VAR7 = 5;
 classTwo->intTwo = 10;
 VAR6->VAR8 = 10;
 FUN2(VAR6->VAR7);
 }
}
void FUN3(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 VAR9 * VAR10 = new(VAR4) VAR9;
 VAR10->VAR7 = 5;
 FUN2(VAR10->VAR7);
 }
}
#endif
