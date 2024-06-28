#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 {
 VAR3 * VAR4 = (VAR3 *)malloc(100*sizeof(VAR3));
 VAR3 * VAR5;
 VAR4[0].VAR6 = 0;
 VAR4[0].VAR7 = 0;
 FUN3(&VAR4[0]);
 VAR5 = (VAR3 *)realloc(VAR4, (130000)*sizeof(VAR3));
 if (VAR5 != NULL)
 {
 VAR4 = VAR5;
 VAR4[0].VAR6 = 1;
 VAR4[0].VAR7 = 1;
 FUN3(&VAR4[0]);
 }
 free(VAR4);
 }
 }
}
static void FUN4()
{
 if(VAR2==5)
 {
 {
 VAR3 * VAR4 = (VAR3 *)malloc(100*sizeof(VAR3));
 VAR3 * VAR5;
 VAR4[0].VAR6 = 0;
 VAR4[0].VAR7 = 0;
 FUN3(&VAR4[0]);
 VAR5 = (VAR3 *)realloc(VAR4, (130000)*sizeof(VAR3));
 if (VAR5 != NULL)
 {
 VAR4 = VAR5;
 VAR4[0].VAR6 = 1;
 VAR4[0].VAR7 = 1;
 FUN3(&VAR4[0]);
 }
 free(VAR4);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
