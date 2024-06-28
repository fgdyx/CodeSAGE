#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 char * VAR7 = (char *)malloc(sizeof(VAR8));
 {
 char * VAR2 = *VAR3;
 VAR2 = VAR7;
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 VAR8 * VAR9 = new(VAR2) VAR8;
 VAR9->VAR10 = 5;
 classTwo->intTwo = 10;
 VAR9->VAR11 = 10;
 FUN2(VAR9->VAR10);
 free(VAR2);
 }
 }
}
static void FUN3()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 char * VAR7 = (char *)malloc(sizeof(VAR8));
 {
 char * VAR2 = *VAR3;
 VAR2 = VAR5;
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 VAR6 * VAR12 = new(VAR2) VAR6;
 VAR12->VAR10 = 5;
 FUN2(VAR12->VAR10);
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
