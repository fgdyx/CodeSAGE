#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 {
 VAR2 * VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR2 * VAR4;
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN3(&VAR3[0]);
 VAR4 = (VAR2 *)realloc(VAR3, (130000)*sizeof(VAR2));
 if (VAR4 != NULL)
 {
 VAR3 = VAR4;
 VAR3[0].VAR5 = 1;
 VAR3[0].VAR6 = 1;
 FUN3(&VAR3[0]);
 }
 free(VAR3);
 }
 }
 else
 {
 {
 VAR2 * VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR2 * VAR4;
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN3(&VAR3[0]);
 VAR4 = (VAR2 *)realloc(VAR3, (130000)*sizeof(VAR2));
 if (VAR4 != NULL)
 {
 VAR3 = VAR4;
 VAR3[0].VAR5 = 1;
 VAR3[0].VAR6 = 1;
 FUN3(&VAR3[0]);
 }
 free(VAR3);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
