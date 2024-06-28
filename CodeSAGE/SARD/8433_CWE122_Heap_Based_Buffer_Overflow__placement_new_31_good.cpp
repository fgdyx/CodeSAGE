#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 VAR2 = VAR5;
 {
 char * VAR7 = VAR2;
 char * VAR2 = VAR7;
 {
 VAR6 * VAR8 = new(VAR2) VAR6;
 VAR8->VAR9 = 5;
 classTwo->intTwo = 10;
 VAR8->VAR10 = 10;
 FUN2(VAR8->VAR9);
 free(VAR2);
 }
 }
}
static void FUN3()
{
 char * VAR2;
 char * VAR3 = (char *)malloc(sizeof(VAR4));
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 VAR2 = VAR3;
 {
 char * VAR7 = VAR2;
 char * VAR2 = VAR7;
 {
 VAR4 * VAR11 = new(VAR2) VAR4;
 VAR11->VAR9 = 5;
 FUN2(VAR11->VAR9);
 free(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
