#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 VAR4 * VAR5 = new(VAR2) VAR4;
 VAR5->VAR6 = 5;
 classTwo->intTwo = 10;
 VAR5->VAR7 = 10;
 FUN2(VAR5->VAR6);
 }
}
void FUN3()
{
 char * VAR2 = VAR8;
 {
 VAR9 * VAR10 = new(VAR2) VAR9;
 VAR10->VAR6 = 5;
 FUN2(VAR10->VAR6);
 }
}
#endif
