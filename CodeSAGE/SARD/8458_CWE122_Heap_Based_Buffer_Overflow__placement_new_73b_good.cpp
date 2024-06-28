#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 {
 VAR5 * VAR6 = new(VAR4) VAR5;
 VAR6->VAR7 = 5;
 classTwo->intTwo = 10;
 VAR6->VAR8 = 10;
 FUN3(VAR6->VAR7);
 free(VAR4);
 }
}
void FUN4(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 {
 VAR9 * VAR10 = new(VAR4) VAR9;
 VAR10->VAR7 = 5;
 FUN3(VAR10->VAR7);
 free(VAR4);
 }
}
#endif
