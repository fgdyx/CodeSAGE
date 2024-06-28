#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 int * VAR3 = (int *)malloc(100*sizeof(int));
 int * VAR4;
 VAR3[0] = 5;
 FUN3(VAR3[0]);
 VAR4 = (int *)realloc(VAR3, (130000)*sizeof(int));
 if (VAR4 != NULL)
 {
 VAR3 = VAR4;
 VAR3[0] = 10;
 FUN3(VAR3[0]);
 }
 free(VAR3);
 }
 }
}
static void FUN4()
{
 if(VAR5)
 {
 {
 int * VAR3 = (int *)malloc(100*sizeof(int));
 int * VAR4;
 VAR3[0] = 5;
 FUN3(VAR3[0]);
 VAR4 = (int *)realloc(VAR3, (130000)*sizeof(int));
 if (VAR4 != NULL)
 {
 VAR3 = VAR4;
 VAR3[0] = 10;
 FUN3(VAR3[0]);
 }
 free(VAR3);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
