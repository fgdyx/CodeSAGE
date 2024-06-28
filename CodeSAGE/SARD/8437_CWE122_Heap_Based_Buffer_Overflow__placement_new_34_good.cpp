#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 unionType VAR3;
 char * VAR4 = (char *)malloc(sizeof(VAR5));
 char * VAR6 = (char *)malloc(sizeof(VAR7));
 VAR2 = VAR6;
 VAR3.VAR8 = VAR2;
 {
 char * VAR2 = VAR3.VAR9;
 {
 VAR7 * VAR10 = new(VAR2) VAR7;
 VAR10->VAR11 = 5;
 classTwo->intTwo = 10;
 VAR10->VAR12 = 10;
 FUN2(VAR10->VAR11);
 free(VAR2);
 }
 }
}
static void FUN3()
{
 char * VAR2;
 unionType VAR3;
 char * VAR4 = (char *)malloc(sizeof(VAR5));
 char * VAR6 = (char *)malloc(sizeof(VAR7));
 VAR2 = VAR4;
 VAR3.VAR8 = VAR2;
 {
 char * VAR2 = VAR3.VAR9;
 {
 VAR5 * VAR13 = new(VAR2) VAR5;
 VAR13->VAR11 = 5;
 FUN2(VAR13->VAR11);
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
